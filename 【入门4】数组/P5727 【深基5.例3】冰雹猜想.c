#include <stdio.h>

void hailstoneSequence(int n) {
    int a[1000]; 
    int i = 0; 

    while (n != 1 && i < 1000) { 
        a[i] = n;
        i++;

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    a[i] = 1; 

    for (int j = i; j >= 0; j--) { 
        printf("%d ", a[j]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    hailstoneSequence(n);
    return 0;
}
