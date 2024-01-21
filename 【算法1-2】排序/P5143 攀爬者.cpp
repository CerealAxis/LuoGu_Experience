#include <bits/stdc++.h>

using namespace std;

struct coord
{
    int x;
    int y;
    int z;
};

bool cmp(coord a, coord b)
{
    return (a.z < b.z);
}

int main()
{
    int i, n;
    double sum;
    scanf("%d", &n);
    coord coord[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &coord[i].x, &coord[i].y, &coord[i].z);
    }
    sort(coord, coord + n, cmp);
    for (i = 0; i < n-1; i++)
    {
        sum+=sqrt(pow((coord[i].x-coord[i+1].x),2)+pow((coord[i].y-coord[i+1].y),2)+pow((coord[i].z-coord[i+1].z),2));
        // printf("%d %d %d\n", coord[i].x, coord[i].y, coord[i].z);
    }
    printf("%.3lf\n",sum);
    return 0;
}