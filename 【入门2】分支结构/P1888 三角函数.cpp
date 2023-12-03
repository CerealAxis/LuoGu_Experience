#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void simplifyFraction(int *numerator, int *denominator) {
	int divisor = gcd(*numerator, *denominator);
	*numerator /= divisor;
	*denominator /= divisor;
}

void calculateSineFraction(int a, int b, int c, int *sine_numerator, int *sine_denominator) {
	double semi_perimeter = (a + b + c) / 2.0;
	double area = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));
	double sine = (2 * area) / (b * c);

	int numerator = (int)(sine * c);
	int denominator = b;

	simplifyFraction(&numerator, &denominator);

	*sine_numerator = numerator;
	*sine_denominator = denominator;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
		printf("\n");
	} else {
		int sine_numerator, sine_denominator;
		calculateSineFraction(a, b, c, &sine_numerator, &sine_denominator);
		printf("%d/%d\n", sine_numerator, sine_denominator);
	}

	return 0;
}
