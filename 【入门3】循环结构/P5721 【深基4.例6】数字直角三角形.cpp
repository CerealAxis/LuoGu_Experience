#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int num = 1;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("%02d", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
