#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    int coins = 0, day = 1, count = 1;
    while (k > 0)
    {
        for (int i = 0; i < day && k > 0; i++)
        {
            count += count;
            k--;
        }
        day++;
        count++;
    }
    printf("%d\n", coins);
    return 0;
}
