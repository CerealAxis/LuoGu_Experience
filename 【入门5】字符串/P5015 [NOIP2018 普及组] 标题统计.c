#include <stdio.h>

int main() {
    int a = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (c != ' ') {
            a++;
        }
    }
    printf("%d\n", a);
    return 0;
}
