#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[4][105];
    int word[26];
    memset(word, 0, sizeof(word));
    for (int i = 0; i < 4; i++)
    {
        fgets(input[i], 105, stdin);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; input[i][j] != '\0'; j++)
        {
            if (isalpha(input[i][j]))
            {
                word[toupper(input[i][j]) - 'A']++;
            }
        }
    }
    int maxCount = *max_element(word, word + 26);
    for (int h = maxCount; h > 0; h--)
    {
        for (int i = 0; i < 26; i++)
        {
            if (word[i] >= h)
                cout << "*";
            else
                cout << " ";
            if (i < 25)
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << (char)('A' + i);
        if (i < 25)
            cout << " ";
    }
    cout << endl;

    return 0;
}
