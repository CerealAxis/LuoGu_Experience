#include <stdio.h>

int main()
{
    int n, t, i, j;
    double a;
    scanf("%d", &n);
    int l[2000001];
    for (i = 0; i < 2000001; i++)
    {
        l[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%lf %d", &a, &t);
        for (j = 1; j <= t; j++)
        {
            int m = (int)(a * j);
            l[m] = 1 - l[m];
        }
    }
    for (i = 1; i < 2000001; i++)
    {
        if (l[i] == 1)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
