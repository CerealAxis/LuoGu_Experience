// #include <bits/stdc++.h>

// #define MAX_SIZE 500

// char b[MAX_SIZE * 2]; // 定义数组 b

// void high_precision_multiplication(char a[], char b[])
// {
//     char result[MAX_SIZE * 2];
//     int i, j, carry = 0;
//     int sizea = strlen(a);
//     int sizeb = strlen(b);
//     memset(result, 0, sizeof(result));

//     for (i = 0; i < sizea; i++)
//     {
//         int num1 = a[sizea - 1 - i] - '0';
//         carry = 0;
//         for (j = 0; j < sizeb; j++)
//         {
//             int num2 = b[sizeb - 1 - j] - '0';
//             int temp = result[MAX_SIZE * 2 - i - j - 1] + num1 * num2 + carry;
//             result[MAX_SIZE * 2 - i - j - 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[MAX_SIZE * 2 - i - j - 1] += carry;
//     }
//     strcpy(b, result);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n < 5)
//     {
//         printf("1 %d\n%d\n", n, n);
//         return 0;
//     }
//     else
//     {
//         int ans[MAX_SIZE]; // 存储拆分后的数字
//         int i, sum = 0;
//         for (i = 2; i <= n; i++)
//         {
//             if ((sum + i) > n)
//             {
//                 sum += i;
//                 ans[i - 2] = i;
//                 break;
//             }
//             else
//             {
//                 sum += i;
//                 ans[i - 2] = i;
//             }
//         }
//         int j = i - 1;
//         int delete_num = sum - n;

//         // 乘积结果初始化为1
//         strcpy(b, "1");

//         for (i = 0; i < j; i++)
//         {
//             if (ans[i] != delete_num)
//             {
//                 printf("%d ", ans[i]);
//                 char num_1[2]; // 将数字转换为字符串
//                 sprintf(num_1, "%d", ans[i]);
//                 high_precision_multiplication(num_1, b);
//             }
//         }
//         printf("\n%s\n", b);
//         return 0;
//     }
// }

// 01背包解法：
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXN 10003
#define MAXL 100003
#define INF 2147483647

typedef long long LL;

typedef struct
{
    int dt[MAXL], len;
} Node;

Node multiply(Node num, int t)
{
    Node res;
    memset(res.dt, 0, sizeof(res.dt));

    for (int i = 1; i <= num.len; i++)
        res.dt[i] = num.dt[i] * t;

    for (int i = 1; i <= num.len + 10; i++)
    {
        res.dt[i + 1] += res.dt[i] / 10;
        res.dt[i] %= 10;
        if (res.dt[i])
            res.len = i;
    }

    return res;
}

void qread(int *ret)
{
    int w = 1, c;
    while ((c = getchar()) > '9' || c < '0')
        w = (c == '-' ? -1 : 1);
    *ret = c - '0';
    while ((c = getchar()) >= '0' && c <= '9')
        *ret = *ret * 10 + c - '0';
    *ret *= w;
}

int main()
{
    int n;
    qread(&n);

    double W[MAXN];
    double dp[MAXN];
    int flg[MAXN];

    for (int i = 1; i <= n; i++)
    {
        W[i] = log(i);
        dp[i] = -INF;
    }

    for (int i = 1; i <= n; i++)
        for (int j = n; j >= i; j--)
            if (dp[j - i] + W[i] > dp[j])
            {
                dp[j] = dp[j - i] + W[i];
                flg[j] = j - i;
            }

    int ans[MAXN];
    int ansSize = 0;
    for (int p = n; p; p = flg[p])
        ans[ansSize++] = p - flg[p];

    for (int i = ansSize - 1; i >= 0; i--)
        printf("%d ", ans[i]);
    printf("\n");

    Node val;
    val.len = 1;
    val.dt[1] = 1;

    for (int i = 0; i < ansSize; i++)
        val = multiply(val, ans[i]);

    for (int i = val.len; i >= 1; i--)
        putchar('0' + val.dt[i]);
    printf("\n");

    return 0;
}
