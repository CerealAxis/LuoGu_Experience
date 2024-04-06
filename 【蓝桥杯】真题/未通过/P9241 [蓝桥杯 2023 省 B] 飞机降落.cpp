//此题未通过
#include <bits/stdc++.h>
using namespace std;

int T, n, t[15], d[15], l[15], result[15], used[15];
int m[15], q = 0;
bool flag = false;

bool dfs(int step, int last_time)
{
    if (step == n + 1)
    {
        flag = true;
        return true;
    }
    if (flag)
    {
        return true;
    }
    for (int k = 0; k < n; k++)
    {
        if (!used[k])
        {
            if (t[k] + d[k] < last_time)
            {
                continue;
            }
            int s = max(t[k], last_time);
            if (s + l[k] <= t[k] + d[k])
            {
                dfs(step + 1, s + l[k]);
            }
            used[k] = 1;
        }
    }
    return false;
}

int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> t[j] >> d[j] >> l[j];
        }
        memset(used, 0, sizeof(used));
        flag = false;
        dfs(1, 0);
        if (flag)
        {
            m[q] = 1;
            q++;
        }
        else
        {
            m[q] = 0;
            q++;
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (m[i] == 1 && i != q - 1)
        {
            cout << "YES" << endl;
        }
        else if (m[i] == 0 && i != q - 1)
        {
            cout << "NO" << endl;
        }
        else if (m[i] == 0 && i == q - 1)
        {
            cout << "NO";
        }
        else if (m[i] == 1 && i == q - 1)
        {
            cout << "YES";
        }
    }
    return 0;
}
