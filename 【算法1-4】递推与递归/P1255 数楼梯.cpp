#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5010
int n, len = 1, result[MAX_SIZE][MAX_SIZE];
void lt(int k)
{
    int i;
    for (i = 1; i <= len; i++)
        result[k][i] = result[k - 1][i] + result[k - 2][i];
    for (i = 1; i <= len; i++)
        if (result[k][i] >= 10)
        {
            result[k][i + 1] += result[k][i] / 10;
            result[k][i] = result[k][i] % 10;
            if (result[k][len + 1])
                len++;
        }
}
int main()
{
    int i;
    scanf("%d", &n);
    result[1][1] = 1;
    result[2][1] = 2;
    for (i = 3; i <= n; i++)
        lt(i);
    for (i = len; i >= 1; i--)
        printf("%d", result[n][i]);
    return 0;
}