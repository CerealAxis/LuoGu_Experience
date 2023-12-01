#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void t1();
void t2();
void t3();
void t4();
void t5();
void t6();
void t7();
void t8();
void t9();
void t10();
void t11();
void t12();
void t13();
void t14();
#define PI 3.141593

int main () {
	int t;
	scanf("%d", &t);
	if (t == 1) {
		t1();
	} else if (t == 2) {
		t2();
	} else if (t == 3) {
		t3();
	} else if (t == 4) {
		t4();
	} else if (t == 5) {
		t5();
	} else if (t == 6) {
		t6();
	} else if (t == 7) {
		t7();
	} else if (t == 8) {
		t8();
	} else if (t == 9) {
		t9();
	} else if (t == 10) {
		t10();
	} else if (t == 11) {
		t11();
	} else if (t == 12) {
		t12();
	} else if (t == 13) {
		t13();
	} else {
		t14();
	}
	return 0;
}

void t1() {
	printf("I love Luogu!");
}

void t2() {
	printf("6 4");
}

void t3() {
	printf("3\n");
	printf("12\n");
	printf("2\n");
}

void t4() {
	printf("166.667");
}

void t5() {
	printf("15");
}

void t6() {
	double length = 6.0;
	double width = 9.0;
	double diagonal = sqrt(pow(length, 2) + pow(width, 2));
	std::cout << diagonal << std::endl;
}

void t7() {
	int total = 100;
	total = total + 10;
	printf("%d\n", total);
	total = total - 20;
	printf("%d\n", total);
	total = 0;
	printf("%d\n", total);
}

void t8() {
	double pi = 3.141593;
	double r = 5.0;

	double circumference = 2 * pi * r;
	double area = pi * r * r;
	double volume = (4.0 / 3.0) * pi * r * r * r;

	std::cout << circumference << std::endl;
	std::cout << area << std::endl;
	std::cout << volume << std::endl;
}

void t9() {
	printf("22");
}

void t10() {
	printf("9");
}

void t11() {
	cout << 1.0 * 100 / 3;
}

void t12() {
	char letter_M = 'M';
	int position_M = letter_M - 'A' + 1;
	printf("%d\n", position_M);
	char letter_18th = 'A' + 17;
	printf("%c\n", letter_18th);
}

void t13() {
	double V1 = 4 * PI * 64 / 3.0, V2 = 4 * PI * 1000 / 3.0;
	cout << (int)pow(V1 + V2, 1 / 3.0);

}

void t14() {
	printf("50");
}