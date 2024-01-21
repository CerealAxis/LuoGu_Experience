#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int verify[n];
    memset(verify, 0, sizeof(verify));
    for (i = 0; i < n - 1; i++)
    {
        int j = abs(num[i] - num[i + 1]);
        if (j < 1 || j >= n || verify[j] == 1)
        {
            printf("Not jolly\n");
            return 0;
        }
        verify[j] = 1;
    }
    printf("Jolly\n");
    return 0;
}
