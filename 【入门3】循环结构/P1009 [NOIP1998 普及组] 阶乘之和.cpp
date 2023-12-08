#include <stdio.h>

int main() {
    int index, A[1000] = {0}, B[1000] = {0}, n, j;
    scanf("%d", &n);
    A[0] = B[0] = 1;
    
    for (index = 2; index <= n; index++) {
        for (j = 0; j < 100; j++)
            B[j] = B[j] * index;
        
        for (j = 0; j < 100; j++) {
            if (B[j] > 9) {
                B[j + 1] += B[j] / 10;
                B[j] = B[j] - (B[j] / 10) * 10;
            }
        }
        
        for (j = 0; j < 100; j++) {
            A[j] += B[j];
            if (A[j] > 9) {
                A[j + 1] += A[j] / 10;
                A[j] = A[j] - (A[j] / 10) * 10;
            }
        }
    }
    
    for (index = 100; index >= 0 && A[index] == 0; index--)
        ;
    
    for (j = index; j >= 0; j--)
        printf("%d", A[j]);
    
    return 0;
}

