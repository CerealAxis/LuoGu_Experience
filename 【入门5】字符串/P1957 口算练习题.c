#include <stdio.h>
#include <math.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int len(int c, int a, int b);

int main()
{
    int n, g = 0, num1, num2;
    char symbol, previous = '\0';
    scanf("%d", &n);
    getchar();
    for (g = 0; g < n; g++)
    {
        scanf(" %c", &symbol);
        if (symbol == 'a' || symbol == 'b' || symbol == 'c')
        {
            previous = symbol;
            scanf("%d %d", &num1, &num2);
        }
        else
        {
            scanf("%d %d", &num1, &num2);
            int p = num1, o = 0;
            while (p != 0)
            {
                p = p / 10;
                o++;
            }
            if (symbol == '1')
            {
                num1 = 1 * pow(10, o) + num1;
            }
            if (symbol == '2')
            {
                num1 = 2 * pow(10, o) + num1;
            }
            if (symbol == '3')
            {
                num1 = 3 * pow(10, o) + num1;
            }
            if (symbol == '4')
            {
                num1 = 4 * pow(10, o) + num1;
            }
            if (symbol == '5')
            {
                num1 = 5 * pow(10, o) + num1;
            }
            if (symbol == '6')
            {
                num1 = 6 * pow(10, o) + num1;
            }
            if (symbol == '7')
            {
                num1 = 7 * pow(10, o) + num1;
            }
            if (symbol == '8')
            {
                num1 =8 * pow(10, o) + num1;
            }
            if (symbol == '9')
            {
                num1 = 9 * pow(10, o) + num1;
            }
            symbol = previous;
        }

        if (symbol == 'a')
        {
            printf("%d+%d=%d\n", num1, num2, addition(num1, num2));
            printf("%d\n", len(addition(num1, num2), num1, num2));
        }
        else if (symbol == 'b')
        {
            printf("%d-%d=%d\n", num1, num2, subtraction(num1, num2));
            printf("%d\n", len(subtraction(num1, num2), num1, num2));
        }
        else if (symbol == 'c')
        {
            printf("%d*%d=%d\n", num1, num2, multiplication(num1, num2));
            printf("%d\n", len(multiplication(num1, num2), num1, num2));
        }
    }
    return 0;
}

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

int len(int result, int num1, int num2)
{
    int length = 2;

    if (num1 < 0)
    {
        length++;
        num1 = -1 * num1;
    }
    if (num2 < 0)
    {
        length++;
        num2 = -1 * num2;
    }
    if (result < 0)
    {
        length++;
        result = -1 * result;
    }

    int temp = num1;
    int digits = 0;
    if (temp == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp = temp / 10;
            digits++;
        }
    }
    length += digits;

    temp = num2;
    digits = 0;
    if (temp == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp = temp / 10;
            digits++;
        }
    }
    length += digits;

    temp = result;
    digits = 0;
    if (temp == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp = temp / 10;
            digits++;
        }
    }
    length += digits;

    return length;
}