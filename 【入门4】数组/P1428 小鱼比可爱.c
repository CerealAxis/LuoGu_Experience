#include <stdio.h>

int main()
{
    int n, i, j, a[100], *p = a, k = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    /*    for (i = 0; i < n; i++)
        {
            printf("%d ", *(p + i));
        }*/
    printf("0 ");
    if (n > 1)
    {
        for (i = 1; i < n; i++)
        {
            for (j = i - 1; j >= 0; j--)
            {
                if (a[i] > a[j])
                {
                    k++;
                }
            }
            printf("%d ", k);
            k = 0;
        }
    }
    return 0;
}
