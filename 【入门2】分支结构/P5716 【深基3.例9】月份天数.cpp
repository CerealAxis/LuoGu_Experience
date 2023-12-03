#include <stdio.h>

int main () {
	int leep_year (int y);
	int y, m, temp;
	scanf ("%d %d", &y, &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("31\n");
	} else if (m == 4 || m == 6 || m == 9 || m == 11) {
		printf("30\n");
	} else {
		temp = leep_year (y);
		if (temp == 2 ) {
			printf("29\n");
		} else
			printf("28\n");
	}
	return 0;
}

int leep_year (int y) {
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 2;
	} else {
		return 1;
	}
}