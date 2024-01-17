#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1005

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE+1];
    int i, j, carry = 0;
    scanf("%s %s", a, b);
    memset(result, '0', sizeof(result));
    int sizea = strlen(a);
    int sizeb = strlen(b);
    for (i = 0; i < MAX_SIZE; i++)
    {
        int num1 = (i < sizea) ? (a[sizea-1-i] - '0') : 0;
        int num2 = (i < sizeb) ? (b[sizeb-1-i] - '0') : 0;
        int sum = num1 + num2 + carry;
        carry = sum / 10;
        result[MAX_SIZE - i] = sum % 10 + '0';
    }
    // result[0]=carry+'0';
    // printf("%c\n",result[0]);
    // printf("%s\n", result);
    for (i=0;i<MAX_SIZE;i++){
        if (result[i]!='0'){
            break;
        }
    }
    for (j=i;j<=MAX_SIZE;j++){
        printf("%c",result[j]);
    }
    printf("\n");
    return 0;
}