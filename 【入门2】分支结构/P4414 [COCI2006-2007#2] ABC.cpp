#include <stdio.h>
#include <string.h>

int main () {
	int a[3], i, j, temp;
	char b[5];
	for (i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%s", b);
	for (i = 0; i < 3; i++) {
		for (j = i; j < 3; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	if (strcmp(b, "ABC") == 0)
		printf("%d %d %d\n", a[0], a[1], a[2]);
	if (strcmp(b, "ACB") == 0)
		printf("%d %d %d\n", a[0], a[2], a[1]);
	if (strcmp(b, "BAC") == 0)
		printf("%d %d %d\n", a[1], a[0], a[2]);
	if (strcmp(b, "BCA") == 0)
		printf("%d %d %d\n", a[1], a[2], a[0]);
	if (strcmp(b, "CBA") == 0)
		printf("%d %d %d\n", a[2], a[1], a[0]);
	if (strcmp(b, "CAB") == 0)
		printf("%d %d %d\n", a[2], a[0], a[1]);
//	printf("%d %d %d\n", a[0], a[1], a[2]);
//	printf("%s", b);
	return 0;
}
