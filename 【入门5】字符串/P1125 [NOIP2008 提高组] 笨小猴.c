#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp, maxn = 0, minn = 1000;
    int frequency[26] = {0};

    char word[1001];

    fgets(word, sizeof(word), stdin);
    int n = strlen(word) - 1;

    for (i = 0; i < n; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            temp = word[i] - 'a';
            frequency[temp]++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (frequency[i] >= maxn)
            maxn = frequency[i];
        if (frequency[i] != 0 && frequency[i] <= minn)
            minn = frequency[i];
    }

    // printf("%d %d\n", maxn, minn);
    j = 0;
    temp = maxn - minn;
    if (temp == 0 || temp == 1)
    {
        j = 1;
    }
    else
    {
        for (i = 2; i < temp; i++)
        {
            if (temp % i == 0)
            {
                // printf("%d\n", i);
                j++;
                break;
            }
        }
    }
    // printf("%d\n", j);

    if (j == 0)
    {
        printf("Lucky Word\n");
        printf("%d\n", temp);
    }
    else
    {
        printf("No Answer\n");
        printf("0\n");
    }
    return 0;
}