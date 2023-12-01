#include <stdio.h>

int main () {
	int a, b, c, d;
	int t1, t2, t3;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t1 = a * 60 + b;
	t2 = c * 60 + d;
	t3 = t2 - t1;
	int e, f;
	e = t3 / 60;
	f = t3 - 60 * e;
	printf("%d %d", e, f);
	return 0;
}