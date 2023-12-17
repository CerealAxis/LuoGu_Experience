#include <stdio.h>

int main()
{
    int i, k=0, n, j, a[1000], b[1000], c[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((a[i] - a[j]) >= -5 && (a[i] - a[j]) <= 5 && (b[i] - b[j]) >= -5 && (b[i] - b[j]) <= 5 && (c[i] - c[j]) >= -5 && (c[i] - c[j]) <= 5 && (a[i] + b[i] + c[i] - a[j] - b[j] - c[j]) >= -10 && (a[i] + b[i] + c[i] - a[j] - b[j] - c[j]) <= 10)
            {
                k++;
            }
        }
    }
    printf("%d\n", k);
    return 0;
}