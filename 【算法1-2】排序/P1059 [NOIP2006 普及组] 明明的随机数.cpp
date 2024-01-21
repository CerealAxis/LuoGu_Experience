#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    int b[1005];
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    memset(b, 0, sizeof(b));
    for (i = 0; i < n; i++)
    {
        b[a[i]] = a[i];
    }
    for (i = 0; i < 1005; i++)
    {
        if (b[i] != 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    for (i = 0; i < 1005; i++)
    {
        if (b[i] != 0)
        {
            printf("%d ",b[i]);
        }
    }
    return 0;
}