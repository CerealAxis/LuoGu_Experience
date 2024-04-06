#include <bits/stdc++.h>

using namespace std;

int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int make_number(int x, int y)
{
    int yi = 0;
    for (int i = x; i <= y; i++)
    {
        yi *= 10;
        yi += num[i];
    }
    return yi;
}

int main()
{
    int i, j, count = 0, n;
    cin >> n;
    while (next_permutation(num, num + 9))
    {
        for (i = 0; i < 7; i++)
        {
            for (j = i + 2; j < 8; j++)
            {
                int num1 = make_number(0, i);
                int num2 = make_number(1 + i, j);
                int num3 = make_number(j+1, 8);
                if (num1 + (num2 / num3) == n && (num2 % num3) == 0)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}