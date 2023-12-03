#include <stdio.h>

int main () {
	float a, b;
	scanf("%f", &a);
	if (a <= 150) {
		b = 0.4463 * a;
	} else if (a > 150 && a <= 400) {
		b = 0.4463 * 150 + 0.4663 * (a - 150);
	} else if (a > 400) {
		b = 183.52 + 0.5663 * (a - 400);
	}
	printf("%.1f", b);
	return 0;
}