#include <stdio.h>

int main () {
	int t[3], i, j, temp;
	scanf("%d %d %d", &t[0], &t[1], &t[2]);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (t[i] < t[j]) {
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	int a = t[0], b = t[1], c = t[2];
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("Not triangle\n");
	else {
		if (a * a + b * b == c * c)
			printf("Right triangle\n");
		if (a * a + b * b > c * c)
			printf("Acute triangle\n");
		if (a * a + b * b < c * c)
			printf("Obtuse triangle\n");
		if (a == b  ||  b == c)
			printf("Isosceles triangle\n");
		if (a == b && b == c)
			printf("Equilateral triangle\n");
	}
	return 0;
}