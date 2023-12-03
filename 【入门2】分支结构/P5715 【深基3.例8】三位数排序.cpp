#include <stdio.h>

int main () {
	int a[3] = {0, 0, 0};
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	int temp, i, j;
	for (i = 0; i < 3; i++) {
		for (j = i; j < 3; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d %d %d", a[0], a[1], a[2]);
	return 0;
}