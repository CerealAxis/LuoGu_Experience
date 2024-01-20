#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

struct president
{
    int array;
    char ballot[105]; 
    int len;
};

bool cmp(president x, president y)
{
    if (x.len != y.len)
        return x.len > y.len;
    else
        return strcmp(x.ballot, y.ballot) > 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    president a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i].ballot);
        a[i].array = i + 1;
        a[i].len = strlen(a[i].ballot);
    }
    sort(a, a + n, cmp);
    printf("%d\n%s\n", a[0].array, a[0].ballot);
    return 0;
}
