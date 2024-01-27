#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int bx, by, mx, my;
    long long int map[40][40];
    bool verify[40][40];
    memset(map, 0, sizeof(map));
    memset(verify, 0, sizeof(verify));
    int fx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int fy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    scanf("%d %d %d %d", &bx, &by, &mx, &my);
    bx += 2, by += 2, mx += 2, my += 2; // 坐标＋2防止越界
    map[2][1] = 1;
    verify[mx][my] = 1;
    for (i = 0; i < 8; i++)
    {
        verify[mx + fx[i]][my + fy[i]] = 1;
    }
    for (i = 2; i <= bx; i++)
    {
        for (int j = 2; j <= by; j++)
        {
            if (verify[i][j])
            {
                continue;
            }
            map[i][j] = map[i - 1][j] + map[i][j - 1];
        }
    }
    printf("%lld\n", map[bx][by]);
    return 0;
}
