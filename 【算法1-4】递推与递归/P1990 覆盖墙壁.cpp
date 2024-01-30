#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 3)
    {
        printf("%d\n", (n == 0) ? 1 : (n == 1) ? 1 : (n == 2) ? 2 : 5);
    }
    else
    {
        const int mod = 10000;
        int a[1000000];
        a[0] = 1, a[1] = 1, a[2] = 2, a[3] = 5;

        for (int j = 4; j <= n; j++)
        {
            a[j] = (2 * a[j - 1] + a[j - 3]) % mod;
        }

        printf("%d\n", a[n]);
    }

    return 0;
}
