#include <stdio.h>
#include <string.h>

int main()
{
    int temp[160];
    memset(temp, 0, sizeof(temp));
    int n, j;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int t = temp[i];
        if (t == 1)
        {
            continue;
        }
        else
        {
            for (j = 2; j < t; j++)
            {
                if (t % j == 0)
                {
                    break;
                }
            }
            if (j >= t)
            {
                printf("%d ", t);
            }
        }
    }
    return 0;
}
