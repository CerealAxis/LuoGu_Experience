#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0, m, k, j;
    scanf("%d", &n);
    while ((scanf("%d", &m)) != -1)
    {
        i++;
        if (i % 2 != 0)
            for (j = 1; j <= m; j++)
            {
                printf("0");
                sum++;
                if (sum == n)
                {
                    printf("\n");
                    sum = 0;
                }
            }
        if (i % 2 == 0)
        {
            for (k = 1; k <= m; k++)
            {
                printf("1");
                sum++;
                if (sum == n)
                {
                    printf("\n");
                    sum = 0;
                }
            }
        }
    }
}