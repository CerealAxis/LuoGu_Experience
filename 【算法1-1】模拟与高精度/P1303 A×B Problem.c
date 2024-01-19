#include <stdio.h>
#include <string.h>

#define MAX_SIZE 2005

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE * 2]; 
    int i, j, carry = 0;
    scanf("%s %s", a, b);
    int sizea = strlen(a);
    int sizeb = strlen(b);
    memset(result, 0, sizeof(result));

    for (i = 0; i < sizea; i++)
    {
        int num1 = a[sizea - 1 - i] - '0';
        carry = 0;
        for (j = 0; j < sizeb; j++)
        {
            int num2 = b[sizeb - 1 - j] - '0';
            int temp = result[MAX_SIZE * 2 - i - j - 1] + num1 * num2 + carry;
            result[MAX_SIZE * 2 - i - j - 1] = temp % 10;
            carry = temp / 10;
        }
        result[MAX_SIZE * 2 - i - j - 1] += carry;
    }

    int start = 0;
    while (start < MAX_SIZE * 2 && result[start] == 0)
    {
        start++;
    }
    if (start == MAX_SIZE * 2)
    {
        printf("0\n");
    }
    else
    {
        for (i = start; i < MAX_SIZE * 2; i++)
        {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    return 0;
}