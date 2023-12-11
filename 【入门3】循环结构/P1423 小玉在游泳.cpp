#include <stdio.h>
#include <math.h>

int main()
{
    double s, r, result = 0.0;
    int i = 0;
    scanf("%lf", &s);
    while (result < s)
    {
        r = pow(0.98, i);
        result = result + 2 * r;
        i++;
    }
    printf("%d", i);
    return 0;
}
