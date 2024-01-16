#include <stdio.h>
#include <string.h>

int main()
{
    char map[100][100];
    int n, m;
    int i, j;
    memset(map, 0, sizeof(map));
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &map[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (map[i][j] == '*')
            {
                continue;
            }
            else if (map[i][j] == '?')
            {
                int temp = 0;
                if ((i - 1) >= 0 && map[i - 1][j] == '*')
                {
                    temp++;
                }
                if ((i + 1) < n && map[i + 1][j] == '*')
                {
                    temp++;
                }
                if ((j - 1) >= 0 && map[i][j - 1] == '*')
                {
                    temp++;
                }
                if ((j + 1) < m && map[i][j + 1] == '*')
                {
                    temp++;
                }
                if ((i - 1) >= 0 && (j - 1) >= 0 && map[i - 1][j - 1] == '*')
                {
                    temp++;
                }
                if ((i - 1) >= 0 && (j + 1) < m && map[i - 1][j + 1] == '*')
                {
                    temp++;
                }
                if ((i + 1) < n && (j - 1) >= 0 && map[i + 1][j - 1] == '*')
                {
                    temp++;
                }
                if ((i + 1) < n && (j + 1) < m && map[i + 1][j + 1] == '*')
                {
                    temp++;
                }
                map[i][j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (map[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                printf("%d", map[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
