#include <stdio.h>

#define MAX_DIGITS 5000

void multiply(int result[], int num, int *size) {
    int carry = 0;
    for (int i = 0; i < *size; i++) {
        int product = result[i] * num + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    while (carry > 0) {
        result[*size] = carry % 10;
        carry /= 10;
        (*size)++;
    }
}

void calculateFactorialSum(int n) {
    int result[MAX_DIGITS] = {0};
    result[0] = 1;
    int size = 1;

    for (int i = 1; i <= n; i++) {
        multiply(result, i, &size);
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += result[i];
    }

    printf("%d\n", sum);
}

int main() {
    int n;
    scanf("%d", &n);

    calculateFactorialSum(n);

    return 0;
}




