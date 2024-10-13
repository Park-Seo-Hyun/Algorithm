#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101];
	scanf("%s", arr);
	int len = strlen(arr);
	
	for (int i = 0; i < len / 2; i++) {
		if (arr[i] != arr[len - 1 - i]) {
			printf("%d", 0);
			return 0;
		}
	}
	printf("%d", 1);

	return 0;
}