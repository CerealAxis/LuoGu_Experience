#include <stdio.h>

int main() {
	int h, r, a;
	float v;
	scanf("%d %d", &h, &r);
	v = 3.14 * r * r * h;

	a = 20000 / v;
	if (20000 - a * v > 0) {
		a++;
	}

	printf("%d\n", a);

	return 0;
}
