#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dp[20][20];
    int i, j, n;
    scanf("%d", &n);
    memset(dp,0,sizeof(dp));
    for (i = 0; i <= 20; i++)
    {
        dp[i][0] = 1;
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 0; i <= n; i++)
        {
            dp[i][j] = i == 0 ? dp[i + 1][j - 1] : dp[i + 1][j - 1] + dp[i - 1][j];
        }
    }
    printf("%d", dp[0][n]);
    return 0;
}