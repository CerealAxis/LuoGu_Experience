#include <stdio.h>

int main()
{
    int i = 0, j, a[100], *p = a;
    while (1)
    {
        scanf("%d", (p + i));
        if (*(p + i) == 0)
        {
            i--;
            break;
        }
        i++;
    }
    for (j = i; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
    return 0;
}