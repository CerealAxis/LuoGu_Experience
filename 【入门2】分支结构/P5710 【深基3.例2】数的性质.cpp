#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int a, b, c, d;

	// СA
	a = (x % 2 == 0 && x > 4 && x <= 12) ? 1 : 0;

	// Uim
	b = (x % 2 == 0 || (x > 4 && x <= 12)) ? 1 : 0;

	// ��β��
	c = ((x % 2 == 0 && !(x > 4 && x <= 12)) || (!(x % 2 == 0) && (x > 4 && x <= 12))) ? 1 : 0;

	// ����
	d = (!(x % 2 == 0) && !(x > 4 && x <= 12)) ? 1 : 0;

	printf("%d %d %d %d", a, b, c, d);
	return 0;
}
