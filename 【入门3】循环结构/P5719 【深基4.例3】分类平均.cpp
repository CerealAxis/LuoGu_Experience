#include <stdio.h>

int main () {
	int n, k, i, j, l;
	double sum1, sum2;
	scanf("%d %d", &n, &k);
	if (k == 0) {
		printf("error\n");
		return -1;
	}
	int c[10000], d[10000];
	j = 0;
	l = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 1; i <= n; i++) {
		if (i % k == 0) {
			c[j] = i;
			j++;
		} else {
			d[l] = i;
			l++;
		}
	}
	for (i = 0; i < j; i++) {
		sum1 = sum1 + c[i];
	}
	for (i = 0; i < l; i++) {
		sum2 = sum2 + d[i];
	}
	printf("%.1f %.1f\n", sum1 / j, sum2 / l);
	return 0;
}
