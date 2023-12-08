#include <stdio.h>

int main () {
	int a, b = 0;
	scanf("%d", &a);
	while (a > 1) {
		a = a / 2;
		b++;
	}
	if (a == 1)
		b += 1;
	printf("%d\n", b);
	return 0;
}