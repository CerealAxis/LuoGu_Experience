#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ans = 0;

void problem_B(int a, int b)
{
    if (a == 100 || b > 30)
    {
        return;
    }
    else if (a == 70 && b == 30)
    {
        ans++;
    }
    problem_B(a + 10, b + 1);
    problem_B(0, b + 1);
}

void problem_A()
{
    int i, j, result = 0;
    string s;
    for (i = 10; i <= 99; i++)
    {
        s = to_string(i);
        if (s.size() % 2 == 0)
        {
            int a = 0, b = 0, c = s.size();
            for (j = 0; j < c / 2; j++)
            {
                a += s[j];
                b += s[c - j - 1];
            }
            if (a == b)
            {
                result++;
            }
        }
    }
    for (i = 1000; i <= 9999; i++)
    {
        s = to_string(i);
        if (s.size() % 2 == 0)
        {
            int a = 0, b = 0, c = s.size();
            for (j = 0; j < c / 2; j++)
            {
                a += s[j];
                b += s[c - j - 1];
            }
            if (a == b)
            {
                result++;
            }
        }
    }
    for (i = 100000; i <= 999999; i++)
    {
        s = to_string(i);
        if (s.size() % 2 == 0)
        {
            int a = 0, b = 0, c = s.size();
            for (j = 0; j < c / 2; j++)
            {
                a += s[j];
                b += s[c - j - 1];
            }
            if (a == b)
            {
                result++;
            }
        }
    }
    for (i = 10000000; i <= 99999999; i++)
    {
        s = to_string(i);
        if (s.size() % 2 == 0)
        {
            int a = 0, b = 0, c = s.size();
            for (j = 0; j < c / 2; j++)
            {
                a += s[j];
                b += s[c - j - 1];
            }
            if (a == b)
            {
                result++;
            }
        }
    }
    printf("%d\n", result);
}

int main()
{
    char pid;
    cin >> pid;
    if (pid == 'A')
        problem_A();
    else
    {
        problem_B(0, 0);
        cout << ans;
    }
    return 0;
}