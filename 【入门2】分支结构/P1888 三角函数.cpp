#include <stdio.h>

int main () {
	int i[3], r, j, temp, c, a, b, k, l;
	int gcd (int a, int b);
	scanf("%d %d %d", &i[0], &i[1], &i[2]);
	for (r = 0; r < 3; r++) {
		for (j = 0; j < 3; j++) {
			if (i[r] > i[j]) {
				temp = i[j];
				i[j] = i[r];
				i[r] = temp;
			}
		}
	}
//	printf("%d %d %d\n", i[0], i[1], i[2]);
	c = gcd (i[0], i[2]);
//	printf("%d\n", c);
	k = i[2] / c;
	l = i[0] / c;
	printf("%d/%d", k, l);
	return 0;
}

int gcd (int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}