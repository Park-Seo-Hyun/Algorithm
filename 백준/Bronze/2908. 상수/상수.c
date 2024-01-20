#include <stdio.h>
#include <string.h>

int main(void) {
	char num1[4], num2[4];
	scanf("%s %s", num1, num2);
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	for (int i = 0; i < len1 / 2; i++) {
		char tmp = num1[i];
		num1[i] = num1[len1 - 1 - i];
		num1[len1 - 1 - i] = tmp;
	}
	int number1 = atoi(num1);
	for (int j = 0; j < len2 / 2; j++) {
		char tmp = num2[j];
		num2[j] = num2[len2 - 1 - j];
		num2[len2 - 1 - j] = tmp;
	}
	int number2 = atoi(num2);
	if (number1 > number2) {
		printf("%d", number1);
	}
	else {
		printf("%d", number2);
	}
	return 0;
}