#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5+10; 

int f[10];

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        int j = v[i][0] - '0'; // 首位
        int l = v[i].back() - '0'; // 末尾
        f[l] = max(f[l], f[j] + 1);
    }
    sort(f, f + 10);
    // for (int i = 0; i < 10; ++i) {
    //     cout << f[i] << " ";
    // }
    printf("%d\n",n-f[9]);
    return 0;
}
