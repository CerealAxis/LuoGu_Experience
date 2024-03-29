#include <bits/stdc++.h>
using namespace std;
struct num
{
    string s;
};
bool cmp(num a, num b)
{
    return a.s + b.s > b.s + a.s;
}

int main()
{
    int n, i;
    num num[50005];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        cin>>num[i].s;
    }
    sort(num, num + n, cmp);
    for (i = 0; i < n; i++) {
        cout<<num[i].s;
    }
    return 0;
}
