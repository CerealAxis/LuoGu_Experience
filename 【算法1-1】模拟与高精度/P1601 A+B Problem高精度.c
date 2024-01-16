#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10005

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE + 1];
    int i, carry = 0;

    scanf("%s %s", a, b);

    int sizea = strlen(a);
    int sizeb = strlen(b);

    memset(result, '0', sizeof(result));

    for (i = 0; i < MAX_SIZE; i++)
    {
        int num1 = (i < sizea) ? (a[sizea - 1 - i] - '0') : 0;
        int num2 = (i < sizeb) ? (b[sizeb - 1 - i] - '0') : 0;

        int sum = num1 + num2 + carry;
        carry = sum / 10;
        result[MAX_SIZE - i] = (sum % 10) + '0';
    }

    result[0] = carry + '0';
    // printf("%s\n",result);

    int startIdx = 0;
    while (result[startIdx] == '0' && startIdx < MAX_SIZE)
    {
        startIdx++;
    }

    for (i = startIdx; i < MAX_SIZE + 1; i++)
    {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}
