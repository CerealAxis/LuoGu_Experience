#include <stdio.h>

int main () {
	int b, n;
	float a, t;
	scanf("%f %d", &t, &n);
	a = t / n;
	b = 2 * n;
	printf("%.3f\n", a);
	printf("%d", b);
	return 0;
}