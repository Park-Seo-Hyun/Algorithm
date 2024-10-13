#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (int j = num - 1; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * (num - i - 2) + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}