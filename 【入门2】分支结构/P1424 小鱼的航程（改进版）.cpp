#include <stdio.h>

int main () {
	int x, n;
	scanf("%d %d", &x, &n);
	if (x + n - 1 <= 5) {
		printf("%d", n * 250);
	} else if (x + n - 1 <= 7) {
		printf("%d", (6 - x) * 250);
	} else if (x + n - 1 >= 8) {
		int t1, t2, t3;
		t1 = (x + n - 1) / 7;
		t2 = (x + n - 1) % 7;
		t3 = t2 - 5;
		if (t3 <= 5) {
			printf("%d", 250 * (n - 2 * t1));
		} else {
			printf("%d", 250 * (n - 2 * t1 - t3 + 5));
		}
	}
}