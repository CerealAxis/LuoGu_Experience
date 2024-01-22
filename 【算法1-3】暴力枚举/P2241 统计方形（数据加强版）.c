#include <stdio.h>

int main()
{
    int n, m, a, b;
    long long int zfx = 0, jx = 0, cfx = 0;
    scanf("%d %d", &n, &m);
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < m; b++)
        {
            if (a == b)
                zfx = zfx + (n - a) * (m - b);
            else if (a != b)
                cfx = cfx + (n - a) * (m - b);
        }
    }
    // for (a = 0; a < n; a++)
    // {
    //     zfx += (n - a) * (m - a);
    // }
    // cfx = jx - zfx;
    printf("%lld %lld", zfx, cfx);
    return 0;
}