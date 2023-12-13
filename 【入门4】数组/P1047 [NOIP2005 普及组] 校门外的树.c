#include <stdio.h>
#include <time.h>

int main()
{
    int l, m, t[10001], a[200], b[200], i, sum, j;
    float start, end, cpu_time_used;
    scanf("%d %d", &l, &m);
    start = clock();
    for (i = 0; i <= l; i++)
    {
        t[i] = 1;
    }
    i = 0;
    sum = 0;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        for (j = a[i]; j <= b[i]; j++)
        {
            t[j] = 0;
        }
    }
    for (i = 0; i <= l; i++)
    {
        if (t[i] == 1)
        {
            sum++;
        }
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("%d\n", sum);
    printf("用时：%f 秒\n", cpu_time_used);
    return 0;
}

/*int main()
{
    int l, m, a[100], b[100], i, sum;
    scanf("%d %d", &l, &m);
    sum = l + 1;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
//    printf("\n");
    int t1 = a[0], t2 = b[0];
    if (m == 1)
    {
        printf("%d\n", sum + t1 - t2 - 1);
        return 0;
    }
    if (m > 1)
    {
        for (i = 1; i < m; i++)
        {
            if ((t2 < a[i] && a[i] <= b[i]) || (b[i] < t1 && a[i] <= b[i]))
            {
                sum = sum - (t2 - t1 + 1);
                t1 = a[i];
                t2 = b[i];
//                printf("无交集：%d %d %d\n", sum, t1, t2);
            }
            if ((a[i] <= b[i] && b[i] >= t1) || (a[i] <= b[i] && a[i] <= t2))
            {
                if (t1 > a[i])
                {
                    t1 = a[i];
                }
                if (t2 < b[i])
                {
                    t2 = b[i];
                }
//                printf("有交集：%d %d\n", t1, t2);
            }
        }
    }
    printf("%d\n", sum + t1 - t2 - 1);
    return 0;
}*/

/*
int main()
{
    int l, m, a[100], b[100], i, sum;
    scanf("%d %d", &l, &m);
    sum=l+1;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        sum = sum-( b[i] - a[i] + 1);
    }
    printf("%d\n",sum);
    return 0;
}*/