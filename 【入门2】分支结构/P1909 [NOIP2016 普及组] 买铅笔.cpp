#include <stdio.h>

int price(int x1, int x2, int x3);

int main() {
	int a, a1, a2, a3, p1, p2, p3, i, j, temp, e[3] = {0, 0, 0};
	scanf("%d", &a);
	scanf("%d %d", &a1, &p1);
	scanf("%d %d", &a2, &p2);
	scanf("%d %d", &a3, &p3);
	e[0] = price(a, a1, p1);
	e[1] = price(a, a2, p2);
	e[2] = price(a, a3, p3);

	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (e[i] > e[j]) {
				temp = e[i];
				e[i] = e[j];
				e[j] = temp;
			}
		}
	}
	printf("%d", e[0]);
	return 0;
}

int price(int x1, int x2, int x3) {
	int c;
	if (x1 % x2 == 0) {
		c = x1 / x2;
	} else {
		c = x1 / x2 + 1;
	}
	int d;
	d = c * x3;
	return d;
}
