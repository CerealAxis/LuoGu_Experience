// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_SIZE 500
// int **map;

// void Init(int n)
// {
//     int t = 1;
//     map = (int **)malloc(n * sizeof(int *));
//     for (int i = 0; i < n; i++)
//     {
//         map[i] = (int *)malloc(n * sizeof(int));
//         for (int j = 0; j < n; j++)
//         {
//             map[i][j] = t;
//             t++;
//         }
//     }
// }

// void out(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", map[i][j]);
//         }
//         printf("\n");
//     }
// }

// void freeMemory(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         free(map[i]);
//     }
//     free(map);
// }

// void cw(int x, int y, int r, int n) // 顺时针旋转90°
// {
//     int i, j;
//     int temp[MAX_SIZE][MAX_SIZE];
//     memset(temp, 0, sizeof(temp));
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             temp[i][j] = map[i][j];
//         }
//     }
//     for (i = 1; i <= r; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             map[x - i][y + j] = temp[x - j][y - i]; 
//             map[x + j][y + i] = temp[x - i][y + j];
//             map[x + i][y - j] = temp[x + j][y + i];
//             map[x - j][y - i] = temp[x + i][y - j];
//             map[x + i][y + j] = temp[x - j][y + i];
//             map[x + j][y - i] = temp[x + i][y + j];
//             map[x - i][y - j] = temp[x + j][y - i];
//             map[x - j][y + i] = temp[x - i][y - j];
//         }
//     }
// }

// void ccw(int x, int y, int r, int n) // 逆时针旋转90°
// {
// }

// int main()
// {
//     int n, i, m;
//     scanf("%d", &n);
//     Init(n);
//     for (i = 0; i < m; i++)
//     {
//         int x, y, r, z;
//         scanf("%d %d %d %d", &x, &y, &r, &z);
//         if (z == 0)
//         {
//             cw(x, y, r, n);
//         }
//         else if (z == 1)
//         {
//             ccw(x, y, r, n);
//         }
//     }
//     out(n);
//     freeMemory(n);
//     return 0;
// }
#include <stdio.h>

#define MAX_SIZE 505

int main() {
    int mainGraph[MAX_SIZE][MAX_SIZE], auxGraph[MAX_SIZE][MAX_SIZE];
    int n, m;

    scanf("%d %d", &n, &m);

    int value = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mainGraph[i][j] = value;
            auxGraph[i][j] = value;
            value++;
        }
    }

    for (int operation = 1; operation <= m; operation++) {
        int x, y, r, z;
        scanf("%d %d %d %d", &x, &y, &r, &z);

        if (z == 0) { 
            for (int j = 1; j <= r; j++) {
                for (int k = 0; k <= j; k++) {
                    auxGraph[x - j][y + k] = mainGraph[x - k][y - j];
                    auxGraph[x + k][y + j] = mainGraph[x - j][y + k];
                    auxGraph[x + j][y - k] = mainGraph[x + k][y + j];
                    auxGraph[x - k][y - j] = mainGraph[x + j][y - k];
                    auxGraph[x + j][y + k] = mainGraph[x - k][y + j];
                    auxGraph[x + k][y - j] = mainGraph[x + j][y + k];
                    auxGraph[x - j][y - k] = mainGraph[x + k][y - j];
                    auxGraph[x - k][y + j] = mainGraph[x - j][y - k];
                }
            }
        } else { 
            for (int j = 1; j <= r; j++) {
                for (int k = 0; k <= j; k++) {
                    auxGraph[x - k][y - j] = mainGraph[x - j][y + k];
                    auxGraph[x - j][y + k] = mainGraph[x + k][y + j];
                    auxGraph[x + k][y + j] = mainGraph[x + j][y - k];
                    auxGraph[x + j][y - k] = mainGraph[x - k][y - j];
                    auxGraph[x + j][y + k] = mainGraph[x + k][y - j];
                    auxGraph[x - k][y + j] = mainGraph[x + j][y + k];
                    auxGraph[x - j][y - k] = mainGraph[x - k][y + j];
                    auxGraph[x + k][y - j] = mainGraph[x - j][y - k];
                }
            }
        }

        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                mainGraph[j][k] = auxGraph[j][k];
            }
        }
    }

    for (int j = 1; j <= n; j++) {
        for (int k = 1; k <= n; k++) {
            printf("%d ", auxGraph[j][k]);
        }
        printf("\n");
    }

    return 0;
}
