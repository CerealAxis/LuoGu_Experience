#include <stdio.h>

int main () {
	int S, V;
	int t1, t2;
	scanf("%d %d", &S, &V);
	if (S % V == 0) {
//		printf("1\n");
		t1 = S / V;
		t2 = t1 + 10;
	} else {
//		printf("2\n");
		t1 = S / V + 1;
		t2 = t1 + 10;
	}
	if (t2 == 480) {
		printf("00:00\n");
	}
	if (t2 < 480) {
		int t3 = 8 * 60 - t2;
		int t4 = t3 / 60;
		int t5 = t3 % 60;
		printf("%02d:%02d\n", t4, t5);
		return 0;
	}
	if (t2 > 480) {
		int t3 = t2 - 480;
		int t4 = t3 / 60;
		int t5 = t3 % 60;
		printf("%02d:%02d\n", 23 - t4, 60 - t5);
		return 0;
	}
}

/*½â·¨¶ş
int main() {
	int S, V;
	scanf("%d %d", &S, &V);

	int travel_time;
	if (S % V == 0)
		travel_time = S / V + 9;
	else
		travel_time = S / V + 10;

	int departure_hour = 7;
	int departure_minute = 59;


	while (travel_time > 0) {
		if (departure_minute != 0)
			departure_minute--;
		else {
			if (departure_hour != 0) {
				departure_hour--;
				departure_minute = 59;
			} else {
				departure_hour = 23;
				departure_minute = 59;
			}
		}
		travel_time--;
	}

	printf("%02d:%02d", departure_hour, departure_minute);

	return 0;
}*/


