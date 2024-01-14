#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

int g[MAX_SIZE][MAX_SIZE];

void dfs(int x, int y, int n) {
    if (n > 0) {
        for (int i = x; i < n / 2 + x; i++) {
            for (int j = y; j < n / 2 + y; j++) {
                g[i][j] = 0;
            }
        }
        dfs(n / 2 + x, y, n / 2);
        dfs(x, n / 2 + y, n / 2);
        dfs(n / 2 + x, n / 2 + y, n / 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    n = 1 << n;

    for (int i=0;i<MAX_SIZE;i++){
        for (int j=0;j<MAX_SIZE;j++){
            g[i][j]=1;
        }
    }

    dfs(0, 0, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}
