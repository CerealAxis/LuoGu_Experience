#include <bits/stdc++.h>

using namespace std;
#define MAX_SIZE 100000
int main()
{
    int n, i;
    int v[MAX_SIZE], a[MAX_SIZE], b[MAX_SIZE], d[MAX_SIZE];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        v[i] = a[i] / b[i];
    }
    sort(v, v + n);
    for (i = v[0] - 1; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            d[j] = a[j] / i;
        }
        bool equal = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[j] != d[j])
            {
                equal = 1;
                break;
            }
        }
        if (equal)
        {
            cout << i + 1 << " ";
            break;
        }
    }
    cout << v[0] << endl;
    return 0;
}