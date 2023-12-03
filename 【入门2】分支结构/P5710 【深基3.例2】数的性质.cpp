#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int a, b, c, d;

	// Ð¡A
	a = (x % 2 == 0 && x > 4 && x <= 12) ? 1 : 0;

	// Uim
	b = (x % 2 == 0 || (x > 4 && x <= 12)) ? 1 : 0;

	// °ËÎ²ÓÂ
	c = ((x % 2 == 0 && !(x > 4 && x <= 12)) || (!(x % 2 == 0) && (x > 4 && x <= 12))) ? 1 : 0;

	// ÕýÃÃ
	d = (!(x % 2 == 0) && !(x > 4 && x <= 12)) ? 1 : 0;

	printf("%d %d %d %d", a, b, c, d);
	return 0;
}
