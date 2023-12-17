#include <stdio.h>

#define MAX_SIZE 105

int n, m, k, x, y, ans = 0;
int hasTorch[MAX_SIZE][MAX_SIZE];

int main()
{
    scanf("%d %d %d", &n, &m, &k); 
    while (m--)
    { 
        scanf("%d %d", &x, &y);
        for (int i = x - 2; i <= x + 2; i++)
            if (i >= 1)
                hasTorch[i][y] = 1;
        for (int i = y - 2; i <= y + 2; i++)
            if (i >= 1)
                hasTorch[x][i] = 1;
        hasTorch[x - 1][y - 1] = hasTorch[x + 1][y - 1] = hasTorch[x - 1][y + 1] = hasTorch[x + 1][y + 1] = 1;
    }
    while (k--)
    {
        scanf("%d %d", &x, &y);
        for (int i = x - 2; i <= x + 2; i++)
            for (int j = y - 2; j <= y + 2; j++)
                if (i >= 1 && j >= 1)
                    hasTorch[i][j] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (hasTorch[i][j])
                ans++;
    printf("%d\n", n * n - ans);
    return 0;
}
/*#include <stdio.h>

int main()
{
    int i, j, t, q, m, n, k, x, y, a[101], b[101], c[101], d[101];
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    if (k != 0)
    {
        for (i = 0; i < k; i++)
        {
            scanf("%d %d", &c[i], &d[i]);
        }
    }
    int l[101][101];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            l[i][j] = 0;
        }
    }

    if (k != 0)
    {
        for (i = 0; i < k; i++)
        {
            x = c[i];
            y = d[i];
            for (t = x - 3; t < x + 2; t++)
            {
                for (q = x - 3; q < x + 2; q++)
                {
                    if (t < n && t > -1 && q < n && q > -1)
                        l[t][q] = 1;
                }
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        x = a[i];
        y = b[i];
        for (j = x - 2; j < x + 1; j++)
        {
            for (t = x - 2; t < x + 1; t++)
            {
                if (t < n && t > -1 && j < n && j > -1)
                    l[t][j] = 1;
            }
        }
        if ((x - 3) < n && (x - 3) > -1 && (y - 1) < n && (y - 1) > -1)
            l[x - 3][y - 1] = 1;
        if ((x + 1) < n && (x + 1) > -1 && (y - 1) < n && (y - 1) > -1)
            l[x + 1][y - 1] = 1;
        if ((x - 1) < n && (x - 1) > -1 && (y - 3) < n && (y - 3) > -1)
            l[x - 1][y - 3] = 1;
        if ((x - 1) < n && (x - 1) > -1 && (y + 1) < n && (y + 1) > -1)
            l[x - 1][y + 1] = 1;
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (l[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/