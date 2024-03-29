#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10005

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE + 1];
    memset(result, '0', sizeof(result));
    scanf("%s %s", a, b);
    
    if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    int a_length = strlen(a), b_length = strlen(b);
    int carry = 0, i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        int temp1 = (a_length - i) > 0 ? a[a_length - i - 1] - '0' : 0;
        int temp2 = (b_length - i) > 0 ? b[b_length - i - 1] - '0' : 0;
        result[MAX_SIZE - i - 1] = (temp1 + temp2 + carry) % 10 + '0';
        carry = (temp1 + temp2 + carry) / 10;
    }
    
    i = 0;
    while (result[i] == '0')
    {
        i++;
    }
    if (i == MAX_SIZE)
    {
        cout << "0"; 
    }
    else
    {
        for (i; i < MAX_SIZE; i++)
        {
            cout << result[i];
        }
    }
    return 0;
}
