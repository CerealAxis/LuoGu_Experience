#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int magic(int h)
{
    return (int)(floor(sqrt(double(h / 2 + 1))));
}

signed main()
{
    int n, h[N], count[N], i, j, cut_max = 0, ans = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> h[i];
        int temp = h[i];
        j = 0;
        while (temp != 1)
        {
            temp = magic(temp);
            j++;
        }
        count[i] = j;
        cut_max = max(cut_max, j);
    }
    for (int i = cut_max; i >= 1; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (count[j] == i)
            {
                if (h[j] != h[j + 1])
                {
                    ans++;
                }
                count[j]--, h[j] = magic(h[j]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}