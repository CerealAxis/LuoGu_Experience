#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()
{
    int a, b, n, week, d, remain;
    cin >> a >> b >> n;
    week = a * 5 + b * 2;
    d = 7*(n / week);
    remain = n % week;
    if (remain != 0)
    {
        for (int i = 1; i < 8; i++)
        {
            if (i >= 1 && i <= 5)
            {
                remain -= a;
                d++;
            }
            else if (i == 6 || i == 7)
            {
                remain -= b;
                d++;
            }
            if (remain <= 0)
            {
                break;
            }
        }
    }
    cout << d << endl;
    return 0;
}