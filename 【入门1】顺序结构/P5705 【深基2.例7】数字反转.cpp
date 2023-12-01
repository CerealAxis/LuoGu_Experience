#include <stdio.h>

int main() {
	int i;
	char string[6];
	char temp[6];

	scanf("%s", string);

	for (i = 0; i < 5; i++) {
		temp[4 - i] = string[i];
	}

	temp[5] = '\0';
	printf("%s\n", temp);
	return 0;
}
