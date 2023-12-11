#include <stdio.h>

int main()
{
    int a, n = 0;
    scanf("%d", &a);
    
    if (a > 0)
    {
        while (a != 0)
        {
            n = n * 10 + a % 10;
            a /= 10;
        }
        printf("%d\n", n);
    }
    else if (a == 0)
    {
        printf("0\n");
    }
    else
    {
        a = -a; 
        while (a != 0)
        {
            n = n * 10 + a % 10;
            a /= 10;
        }
        printf("-%d\n", n);
    }
    return 0;
}
