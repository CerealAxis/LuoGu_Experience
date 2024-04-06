// 超时
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t, i, j, a;
    int result[100005];
    bool sign = false;
    cin >> t;
    memset(result, 0, sizeof(result));
    for (int l = 0; l < t; l++)
    {
        cin >> a;
        int b = (int)ceil(pow(a, 0.25));
        int c = 4000;
        int pow_2[4005], pow_3[4005];
        for (i = 1; i <= 4000; i++)
        {
            pow_2[i] = pow(i, 2);
            pow_3[i] = pow(i, 3);
        }
        // cout<<a<<":"<<b<<endl;
        sign = false;
        for (i = 1; i <= min(b, c); i++)
        {
            for (j = 1; j <= min(b, c); j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if ((pow_2[i] * pow_3[j]) == a)
                {
                    sign = true;
                    break;
                }
            }
        }
        if (sign)
        {
            // cout << a << " " << i << " " << j << " "
            //      << "true" << endl;
            result[l] = 1;
        }
        else
        {
            result[l] = 0;
        }
    }
    for (i = 0; i < t; i++)
    {
        if (result[i] == 1)
        {
            cout << "yes" << endl;
        }
        else if (result[i] == 0)
        {
            cout << "no" << endl;
        }
    }
    return 0;
}