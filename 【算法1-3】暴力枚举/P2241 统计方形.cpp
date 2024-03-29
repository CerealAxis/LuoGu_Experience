#include <bits/stdc++.h>

using namespace std;

#define ll long long 
int main() {
    ll l, w, i, j;
    ll sum1 = 0, sum2 = 0;
    cin>>l>>w;
    for (i = 0; i < (l > w ? w : l); i++) {
        sum1 += (l - i) * (w - i);
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < w; j++) {
            sum2 += (l - i) * (w - j);
        }
    }
    sum2 -= sum1;
    cout<<sum1<<" "<<sum2;
    return 0;
}
