#include <stdio.h>

int main () {
	int h[10], p, t, i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &h[i]);
	}
	scanf("%d", &p);
	p = p + 30;
	for (i = 0; i < 10; i++) {
		if (h[i] <= p) {
			t++;
		}
	}
	printf("%d\n", t);
	/*	for (i = 0; i < 10; i++) {
			printf("%d ", h[i]);
		}
		printf("\n");
		printf("%d", p);*/
	return 0;
}