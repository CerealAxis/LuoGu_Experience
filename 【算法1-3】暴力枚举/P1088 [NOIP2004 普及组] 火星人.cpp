#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, m, num[500005];
    cin >> n;
    cin >> m;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < m; i++)
    {
        next_permutation(num, num + n);
    }
    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}