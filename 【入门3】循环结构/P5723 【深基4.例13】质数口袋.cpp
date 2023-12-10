#include <stdio.h>

int main()
{
    int L, sum = 0, count = 0;
    scanf("%d", &L);

    for (int num = 2; num <= L; num++)
    {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            if (sum + num <= L)
            {
                printf("%d\n", num);
                sum += num;
                count++;
            }
            else
            {
                break;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
