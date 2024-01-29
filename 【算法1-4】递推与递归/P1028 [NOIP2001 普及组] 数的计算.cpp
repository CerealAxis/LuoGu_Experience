#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    int a[1005];
    memset(a, 0, sizeof(a));
    a[1] = 1;
    a[2] = 2;
    a[3] = 2;
    a[4] = 4;
    scanf("%d", &n);
    if (n <= 4)
    {
        printf("%d\n", a[n]);
    }
    else
    {
        for (i = 5; i <= n; i++)
        {
            if ((i % 2) == 1)
            {
                a[i] = a[i - 1];
            }
            else if ((i % 2) == 0)
            {
                a[i] = a[i - 1] + a[i / 2];
            }
        }
        printf("%d\n", a[n]);
    }
    return 0;
}