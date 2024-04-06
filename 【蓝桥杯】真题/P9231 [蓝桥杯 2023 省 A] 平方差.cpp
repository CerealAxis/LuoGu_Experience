#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, ans = 0;
    cin >> l >> r;
    for (int x = l; x <= r; x++)
    {
        if ((x % 2 == 1) || (x % 4 == 0)){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}

// 方法一：超时
//  #include <iostream>
//  #include <cmath>

// using namespace std;

// int main() {
//     int l, r, ans = 0;
//     cin >> l >> r;
//     for (int x = l; x <= r; x++) {
//         int limit = (int)ceil(sqrt(x));
//         for (int y = 1; y <= limit; y++) {
//             int z = sqrt(y * y - x);
//             if (y * y - z * z == x && y * y - z * z >= 0) {
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }
