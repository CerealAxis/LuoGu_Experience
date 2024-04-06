#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 1;

int main() {
    int n, a[N];
    long long int result = 0, suffix_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        suffix_sum += a[i]; 
    }
    for (int i = 0; i < n - 1; i++) {
        suffix_sum -= a[i];
        result += a[i] * suffix_sum;
    }
    cout << result << endl;
    return 0;
}


// 方法一：超时
//  #include <bits/stdc++.h>
//  using namespace std;
//  const int N = 2e5+5;
//  int main()
//  {
//      int n, a[N];
//      long long int sum=0;

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             sum += a[i] * a[j];
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }