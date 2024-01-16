#include <stdio.h>
#include <string.h>

int main()
{
    struct score
    {
        char name[10];
        int Index;
        int ch;
        int ma;
        int en;
        int score;
    } score[1001];
    memset(score, 0, sizeof(score));
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", score[i].name, &score[i].ch, &score[i].ma, &score[i].en);
        score[i].Index = i;
        score[i].score = score[i].ch + score[i].ma + score[i].en;
    }
    int tempscore = score[0].score;
    int tempIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (tempscore < score[i].score)
        {
            tempscore = score[i].score;
            tempIndex = i;
        }
        else if (tempscore == score[i].score)
        {
            if (tempIndex > i)
            {
                tempIndex = i;
            }
        }
    }
    printf("%s %d %d %d\n", score[tempIndex].name, score[tempIndex].ch,score[tempIndex].ma,score[tempIndex].en);
}