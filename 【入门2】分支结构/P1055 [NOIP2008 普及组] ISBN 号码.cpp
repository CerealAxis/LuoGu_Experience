#include <stdio.h>
#include <string.h>

int main() {
	char isbn[15]; 
	scanf("%s", isbn);

	int sum = 0, multiplier = 1;
	for (int i = 0; i < 12; i++) {
		if (isbn[i] == '-') {
			continue; 
		}

		sum += (isbn[i] - '0') * multiplier;
		multiplier++;
	}

	int remainder = sum % 11;
	char correct_checksum;
	if (remainder == 10) {
		correct_checksum = 'X';
	} else {
		correct_checksum = remainder + '0';
	}

	if (correct_checksum == isbn[12]) {
		printf("Right\n");
	} else {
		isbn[12] = correct_checksum;
		printf("%s\n", isbn);
	}

	return 0;
}
