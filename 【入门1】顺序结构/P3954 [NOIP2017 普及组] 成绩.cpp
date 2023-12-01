#include <stdio.h>

int main () {
	int a[3];
	int score, i;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	score = a[0] * 0.2 + a[1] * 0.3 + a[2] * 0.5;
	printf("%d", score);
	return 0;
}