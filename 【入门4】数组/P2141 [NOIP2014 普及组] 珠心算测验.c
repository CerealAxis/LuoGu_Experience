#include <stdio.h>

int main()
{
    int n, i, j, g, count = 0;
    int nums[100];
    int temp[20000] = {0};
    for (i = 0; i < 20000; i++)
    {
        temp[i] = 0;
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int sum = nums[i] + nums[j];

            if (temp[sum] == 0)
            {
                temp[sum] = 1;
                for (g = 0; g < n; g++)
                {
                    if (g != i && g != j && nums[g] == sum)
                    {
                        count++;
                    }
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
