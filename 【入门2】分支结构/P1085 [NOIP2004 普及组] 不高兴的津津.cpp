#include <stdio.h>

int main() {
	int i, v = 0, a, b, t[7], h = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d %d", &a, &b);
		t[i] = a + b;
		if (t[i] > 8)
			h++;
	}
	if (h == 0) {
		printf("0\n");
	} else {
		for (i = 1; i < 7; i++) {
			if (t[i] > t[v]) {
				v = i;
			}
		}
		printf("%d\n", v + 1);
	}
	return 0;
}
