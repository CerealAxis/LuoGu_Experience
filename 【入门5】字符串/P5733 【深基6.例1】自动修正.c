#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int i;
    char a[1000];
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = toupper(a[i]); 
        }
    }
    printf("%s", a);
    return 0;
}

