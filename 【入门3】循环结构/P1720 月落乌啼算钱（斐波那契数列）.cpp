#include <stdio.h>
#include <math.h>

/*int main()
{
    int n;
    scanf("%d", &n);
    printf("%.2f", (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5));
    return 0;
}*/

int main()
{
    int n, i;
    double f[50];
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1.00\n");
    }
    else if (n == 2)
    {
        printf("1.00\n");
    }
    else
    {
        for (i = 3; i <= n; i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        printf("%0.2lf",f[n]);
    }
    return 0;
}