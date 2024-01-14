#include <stdio.h>
#include <math.h>

int main()
{
    struct zuobiao
    {
        float x;
        float y;
    } zuobiao1, zuobiao2, zuobiao3;
    scanf("%f %f", &zuobiao1.x, &zuobiao1.y);
    getchar();
    scanf("%f %f", &zuobiao2.x, &zuobiao2.y);
    getchar();
    scanf("%f %f", &zuobiao3.x, &zuobiao3.y);
    float d1 = sqrt(pow((zuobiao1.x - zuobiao2.x), 2) + pow((zuobiao1.y - zuobiao2.y), 2));
    float d2 = sqrt(pow((zuobiao1.x - zuobiao3.x), 2) + pow((zuobiao1.y - zuobiao3.y), 2));
    float d3 = sqrt(pow((zuobiao2.x - zuobiao3.x), 2) + pow((zuobiao2.y - zuobiao3.y), 2));
    printf("%.2f", d1 + d2 + d3);
    return 0;
}