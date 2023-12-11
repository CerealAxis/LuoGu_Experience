#include <stdio.h>
int main()
{
    int l, r, i;
    int IsPrime(int a),reverse (int n),digit(int x);
    scanf("%d %d", &l, &r);
    if (l <= 2)
        printf("2\n");
    if (l % 2 == 0)
        l++;
    for (i = l; i <= r; i += 2)
    {
        if (i % 2 == 0)
        {
            break;
        }
        if (i == 9999989)
            break;
        if (digit(i) && reverse(i) && IsPrime(i))
            printf("%d\n", i);
    }
    return 0;
}

int IsPrime(int a)
{
    int i;
    if (a == 1)
        return 0;
    if (a % 2 == 0)
        return 0;
    else
    {
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
                return 0;
        }
        return 1;
    }
}
int reverse(int n)
{
    int sum = 0;
    int k = n;
    while (n != 0)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if (sum == k)
        return 1;
    else
        return 0;
}
int digit(int x)
{
    if ((1000 <= x && x <= 10000) || (100000 <= x && x <= 1000000))
        return 0;
    else
        return 1;
}
