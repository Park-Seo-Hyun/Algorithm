#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[16];
	scanf("%s", arr);
	int time = 0;

	for (int i = 0; i < strlen(arr); i++) {
		char alpha = arr[i];
		if (alpha >= 'A' && alpha <= 'C') time += 3;
		else if (alpha >= 'D' && alpha <= 'F') time += 4;
		else if (alpha >= 'G' && alpha <= 'I') time += 5;
		else if (alpha >= 'J' && alpha <= 'L') time += 6;
		else if (alpha >= 'M' && alpha <= 'O') time += 7;
		else if (alpha >= 'P' && alpha <= 'S') time += 8;
		else if (alpha >= 'T' && alpha <= 'V') time += 9;
		else if (alpha >= 'W' && alpha <= 'Z') time += 10;
	}
	printf("%d", time);

	return 0;
}