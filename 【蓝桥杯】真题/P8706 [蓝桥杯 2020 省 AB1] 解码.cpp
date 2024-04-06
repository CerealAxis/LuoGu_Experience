#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000];
    cin >> a;
    int c = strlen(a);
    for (int i = 0; i < c; i++)
    {
        if (isalpha(a[i]) && i + 1 < c && isdigit(a[i + 1]))
        {
            int count = a[i+1]-'0';
            for (int j = 0; j < count; j++)
            {
                cout << a[i];
            }
        }
        else if (isdigit(a[i])){
            continue;
        }
        else
        {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}
