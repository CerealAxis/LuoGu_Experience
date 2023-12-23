#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[10000];
    char ans[10][1000];

    for (int i = 1; i <= n; i++)
    {
        scanf(" %c", &a[i]);

        if (a[i] == '1')
        {
            strcat(ans[1], "..X.");
            strcat(ans[2], "..X.");
            strcat(ans[3], "..X.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "..X.");
        }
        else if (a[i] == '2')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "..X.");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "X...");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '3')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "..X.");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '4')
        {
            strcat(ans[1], "X.X.");
            strcat(ans[2], "X.X.");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "..X.");
        }
        else if (a[i] == '5')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "X...");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '6')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "X...");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "X.X.");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '7')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "..X.");
            strcat(ans[3], "..X.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "..X.");
        }
        else if (a[i] == '8')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "X.X.");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "X.X.");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '9')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "X.X.");
            strcat(ans[3], "XXX.");
            strcat(ans[4], "..X.");
            strcat(ans[5], "XXX.");
        }
        else if (a[i] == '0')
        {
            strcat(ans[1], "XXX.");
            strcat(ans[2], "X.X.");
            strcat(ans[3], "X.X.");
            strcat(ans[4], "X.X.");
            strcat(ans[5], "XXX.");
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        ans[i][strlen(ans[i]) - 1] = '\0'; 
        printf("%s\n", ans[i]);
    }

    return 0;
}
/*#include <stdio.h>

int main()
{
    int i, j, k = 0, t, n;
    char a[100];
    char b[500][500]; // 先行后列
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    for (j = 0; j < n; j++)
    {
        if (a[j] == '0')
        {
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 2 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '1')
        {
            for (t = 0; t < 5; t++)
            {
                b[t][k] = '.';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = '.';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '2')
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 1)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '3')
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '4')
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 3 || t == 4)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t != 2)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '5')
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '6')
        {
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '7')
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 0)
                    b[t][k] = 'X';
                else
                    b[t][k] = '.';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 0)
                    b[t][k] = 'X';
                else
                    b[t][k] = '.';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else if (a[j] == '8')
        {
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        else
        {
            for (t = 0; t < 5; t++)
            {
                if (t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                if (t == 1 || t == 3)
                    b[t][k] = '.';
                else
                    b[t][k] = 'X';
            }
            k++;
            for (t = 0; t < 5; t++)
            {
                b[t][k] = 'X';
            }
            k++;
        }

        for (t = 0; t < 5; t++)
        {
            b[t][k] = '.';
            k++;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < k - 5; j++)
        {
            printf("%c", b[i][j]);
        }
        if (i != 4)
            printf("\n");
    }
    return 0;
}*/