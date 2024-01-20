#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_N 1000

int N;
int w;
int s[MAX_N * MAX_N]; // Assuming N*N is the maximum possible size, adjust as needed
int size_s = 0;

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &w);
        int v[size_s];
        for (int j = 0; j < size_s; j++) {
            v[j] = s[j];
        }
        for (int j = 0; j < size_s; j++) {
            s[size_s++] = w + v[j];
            if (abs(w - v[j]) != 0) {
                s[size_s++] = abs(w - v[j]);
            }
        }
        s[size_s++] = w;
        qsort(s, size_s, sizeof(int), compare);
        int unique_count = 1;
        for (int j = 1; j < size_s; j++) {
            if (s[j] != s[j - 1]) {
                unique_count++;
            }
        }
        printf("%d\n", unique_count);
    }
    return 0;
}
