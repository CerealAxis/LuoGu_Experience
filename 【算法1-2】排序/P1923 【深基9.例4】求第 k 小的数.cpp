#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n=0, k;
    scanf("%d %d", &n, &k);
    int a[n+1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    nth_element(a, a + k, a + n);
    printf("%d\n", a[k]);
    return 0;
}

// sort函数做法
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX_SIZE 50000005

// int main()
// {
//     int i, n, k;
//     int a[MAX_SIZE];
//     scanf("%d %d", &n, &k);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     sort(a, a + n);
//     printf("%d\n", a[k]);
//     return 0;
// }