#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, p, s, temp;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2;
	temp = p * (p - a) * (p - b) * (p - c);
	s = sqrt(temp);
	printf("%.1f", s);
	return 0;
}
