#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100];
	scanf("%s", arr);
	int len = 1;
	for (int i = 0; i < strlen(arr); i++) {
		if (len == 11) {
			len = 1;
			printf("\n");
		}
		printf("%c", arr[i]);
		len++;
	}

	return 0;
}