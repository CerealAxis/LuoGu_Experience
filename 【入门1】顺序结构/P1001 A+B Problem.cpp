#include <stdio.h>

int main() {
	int a, b, temp;
	printf("Please enter two numbers.\n");
	printf("For example: 20 30\n");
	scanf("%d %d", &a, &b);
	temp = a + b;
	printf("%d\n", temp);
	return 0;
}
