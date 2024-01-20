#include <stdio.h>
#include <string.h>

int main() {
	int num1, num2;
	char arr[21];
	scanf("%d", &num1);
	while (num1--) {
		scanf("%d %s", &num2, arr);
		for (int i = 0; i < strlen(arr); i++) {
			for (int j = 0; j < num2; j++) {
				printf("%c", arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}