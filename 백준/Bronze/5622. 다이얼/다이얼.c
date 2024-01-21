#include <stdio.h>
#include <string.h>

int main(void) {
	int sec = 0;
	char alpha[16];
	scanf("%s", alpha);
	for (int i = 0; i < strlen(alpha); i++) {
		if (alpha[i] >= 65 && alpha[i] <= 67) {
			sec += 3;
		}
		else if (alpha[i] >= 68 && alpha[i] <= 70) {
			sec += 4;
		}
		else if (alpha[i] >= 71 && alpha[i] <= 73) {
			sec += 5;
		}
		else if (alpha[i] >= 74 && alpha[i] <= 76) {
			sec += 6;
		}
		else if (alpha[i] >= 77 && alpha[i] <= 79) {
			sec += 7;
		}
		else if (alpha[i] >= 80 && alpha[i] <= 83) {
			sec += 8;
		}
		else if (alpha[i] >= 84 && alpha[i] <= 86) {
			sec += 9;
		}
		else if (alpha[i] >= 87 && alpha[i] <= 90) {
			sec += 10;
		}
	}
	printf("%d", sec);
	return 0;
}