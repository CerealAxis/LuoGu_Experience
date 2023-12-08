#include <stdio.h>

int main() {
    int n, i;
    double t = 0.0; 
    scanf("%d", &n);
    for (i = 1; i < 1000000; i++) {
        t = t + 1.0 / i; 
        if (t > n) {
            printf("%d", i);
            return 0;
        }
    }
}
