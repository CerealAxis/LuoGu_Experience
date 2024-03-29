#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i = 0;
    scanf("%d %d", &n, &k);
    int num[5000005];
    while (i < n)
    {
        scanf("%d", &num[i]);
        i++;
    }
    nth_element(num, num + k, num + n);
    printf("%d\n", num[k]);
    return 0;
}