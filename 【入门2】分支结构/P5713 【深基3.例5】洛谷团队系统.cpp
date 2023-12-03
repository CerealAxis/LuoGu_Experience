#include <stdio.h>

int main () {
	int a;
	scanf("%d", &a);
	if (a < 6) {
		printf("Local\n");
	} else {
		printf("Luogu\n");
	}
	return 0;
}