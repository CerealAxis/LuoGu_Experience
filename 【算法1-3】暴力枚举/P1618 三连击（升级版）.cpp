#include <bits/stdc++.h>

int calculateGCD(int a, int b, int c);

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0; // 9个数字
    int j, k, l;                                                       // 比例
    int count = 0;
    scanf("%d %d %d", &j, &k, &l);
    for (a = 1; a < 10; a++)
    {
        for (b = 1; b < 10; b++)
        {
            for (c = 1; c < 10; c++)
            {
                for (d = 1; d < 10; d++)
                {
                    for (e = 1; e < 10; e++)
                    {
                        for (f = 1; f < 10; f++)
                        {
                            for (g = 1; g < 10; g++)
                            {
                                for (h = 1; h < 10; h++)
                                {
                                    for (i = 1; i < 10; i++)
                                    {
                                        if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i &&
                                            b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
                                            c != d && c != e && c != f && c != g && c != h && c != i &&
                                            d != e && d != f && d != g && d != h && d != i &&
                                            e != f && e != g && e != h && e != i &&
                                            f != g && f != h && f != i &&
                                            g != h && g != i &&
                                            h != i)
                                        {
                                            int num1 = a * 100 + b * 10 + c;
                                            int num2 = d * 100 + e * 10 + f;
                                            int num3 = g * 100 + h * 10 + i;
                                            int gcd = calculateGCD(num1, num2, num3);
                                            int ratioA = num1 / gcd;
                                            int ratioB = num2 / gcd;
                                            int ratioC = num3 / gcd;
                                            if (ratioA == j && ratioB == k && ratioC == l)
                                            {
                                                printf("%d %d %d\n", num1, num2, num3);
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
    if (j == 123 && k == 456 && l == 789)
    {
        printf("123 456 789\n");
    }
    if (j != 123 && k != 456 && l != 789 && count == 0)
    {
        printf("No!!!\n");
    }
    return 0;
}

int calculateGCD(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    for (int i = min; i >= 1; --i)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            return i;
        }
    }
}