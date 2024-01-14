#include <stdio.h>

int jiecheng(int x)
{
    if (x == 0)
    {
        return (1);
    }
    else
    {
        return (x * jiecheng(x - 1));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", jiecheng(n));
    return 0;
}
