#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s;
    int w = 0, l = 0;
    int i = 0;
    int win[62525];
    memset(win, 0, sizeof(win));
    while (scanf(" %c", &s) == 1 && s != 'E')
    {
        if (s == 'W')
            win[++i] = 1;
        else
            win[++i] = 2;
    }
    // for (int n = 1; n <= i; n++)
    // {
    //     printf("%d ", win[n]);
    // }
    // printf("\n");
    for (i = 1; 1; i++)
    {
        if (win[i] == 1)
            w++;
        else if (win[i] == 2)
            l++;
        else if (win[i] == 0)
        {
            printf("%d:%d", w, l);
            break;
        }
        if (w - l >= 2 || l - w >= 2)
        {
            if (w >= 11 || l >= 11)
            {
                printf("%d:%d\n", w, l);
                w = 0;
                l = 0;
            }
        }
    }
    w=0;
    l=0;
    printf("\n");
    printf("\n");
    for (i = 1; 1; i++)
    {
        if (win[i] == 1)
            w++;
        else if (win[i] == 2)
            l++;
        else if (win[i] == 0)
        {
            printf("%d:%d", w, l);
            break;
        }
        if (w - l >= 2 || l - w >= 2)
        {
            if (w >= 21 || l >= 21)
            {
                printf("%d:%d\n", w, l);
                w = 0;
                l = 0;
            }
        }
    }
    return 0;
}