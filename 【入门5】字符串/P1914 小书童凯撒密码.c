#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, i;
    char a[51]; 
    scanf("%d", &n);
    getchar();
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++) 
    {
        if (islower(a[i]))
        {
            if ((a[i] + n) <= 'z')
                a[i] = a[i] + n;
            else
                a[i] = 'a' + (a[i] + n - 'a') % 26; 
        }
    }
    printf("%s", a);
    return 0;
}