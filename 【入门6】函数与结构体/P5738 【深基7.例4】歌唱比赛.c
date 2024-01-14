#include <stdio.h>
#include <string.h>

int main()
{
    struct player
    {
        float score[20];
        float endscore;
    } players[100];

    int n, m, i, j;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%f", &players[i].score[j]); 
        }

        for (int g = 0; g < m - 1; g++)
        {
            for (int h = g + 1; h < m; h++)
            {
                if (players[i].score[g] > players[i].score[h])
                {
                    float temp = players[i].score[h];
                    players[i].score[h] = players[i].score[g];
                    players[i].score[g] = temp;
                }
            }
        }

        float sum = 0;
        for (j = 1; j < m - 1; j++)
        {
            sum += players[i].score[j];
        }
        players[i].endscore = sum / (m - 2);
    }

    float maxScore = 0.0;
    for (i = 0; i < n; i++)
    {
        if (players[i].endscore > maxScore)
        {
            maxScore = players[i].endscore;
        }
    }

    printf("%.2f\n", maxScore);

    return 0;
}
