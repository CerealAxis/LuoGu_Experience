#include <stdio.h>

int countOccurrences(int n, int x)
{
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 == x)
            {
                count++;
            }
            temp /= 10;
        }
    }
    return count;
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int result = countOccurrences(n, x);
    printf("%d\n", result);

    return 0;
}
