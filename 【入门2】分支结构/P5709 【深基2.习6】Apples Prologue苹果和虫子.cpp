#include <stdio.h>

int main () {
	int m, t, s;
	scanf("%d %d %d", &m, &t, &s);
	if (t == 0) {
		printf("0\n");
	} else {
		int a, b, c;
		a = s % t;
		if (a == 0) {
			b = s / t;
		} else {
			b = s / t + 1;
		}
		c = m - b;
		if (c <= 0) {
			c = 0;
		} else {
			c = c;
		}
		printf("%d\n", c);
	}
	return 0;
}