#include <stdio.h>

int main()
{
    int n, i, f[1000], j, temp;
    double sum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (f[i] > f[j])
            {
                temp = f[j];
                f[j] = f[i];
                f[i] = temp;
            }
        }
    }
    f[0] = 0;
    f[n - 1] = 0;
    for (i = 0; i < n; i++)
    {
        sum+=f[i];
    }
    double t=sum/(n-2);
    printf("%0.2lf",t);
    return 0;
}