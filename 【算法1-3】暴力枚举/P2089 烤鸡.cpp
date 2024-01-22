#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 30 || n < 10)
    {
        printf("0\n");
        return 0;
    }
    else if (n <= 30)
    {
        int a, b, c, d, e, f, g, h, i, j; // 十种调料
        int count = 0;
        int temp[10000][10];
        for (a = 1; a < 4; a++)
        {
            for (b = 1; b < 4; b++)
            {
                for (c = 1; c < 4; c++)
                {
                    for (d = 1; d < 4; d++)
                    {
                        for (e = 1; e < 4; e++)
                        {
                            for (f = 1; f < 4; f++)
                            {
                                for (g = 1; g < 4; g++)
                                {
                                    for (h = 1; h < 4; h++)
                                    {
                                        for (i = 1; i < 4; i++)
                                        {
                                            for (j = 1; j < 4; j++)
                                            {
                                                if ((a + b + c + d + e + f + g + h + i + j) == n)
                                                {
                                                    temp[count][0] = a;
                                                    temp[count][1] = b;
                                                    temp[count][2] = c;
                                                    temp[count][3] = d;
                                                    temp[count][4] = e;
                                                    temp[count][5] = f;
                                                    temp[count][6] = g;
                                                    temp[count][7] = h;
                                                    temp[count][8] = i;
                                                    temp[count][9] = j;
                                                    count++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", count);
        for (i = 0; i < count; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%d ", temp[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}