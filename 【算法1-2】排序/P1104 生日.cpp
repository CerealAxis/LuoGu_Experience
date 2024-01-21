#include <bits/stdc++.h>
using namespace std;

struct birthday
{
    char name[21];
    int year;
    int month;
    int day;
    int array;
};

bool cmp(birthday x, birthday y)
{
    if (x.year != y.year)
    {
        return (x.year < y.year);
    }
    else if (x.year == y.year && x.month != y.month)
    {
        return (x.month < y.month);
    }
    else if (x.year == y.year && x.month == y.month && x.day != y.day)
    {
        return (x.day < y.day);
    }
    else if (x.year == y.year && x.month == y.month && x.day == y.day && x.array != y.array)
    {
        return (x.array > y.array);
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    birthday a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].year, &a[i].month, &a[i].day);
        a[i].array = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", a[i].name);
    }
    return 0;
}
