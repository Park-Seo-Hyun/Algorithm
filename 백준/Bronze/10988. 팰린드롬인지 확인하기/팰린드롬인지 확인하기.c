#include <stdio.h>
#include <string.h>

int main(void) {
	char* arr = (char*)malloc(sizeof(char) * 100);
	int result = 1;
	scanf("%s", arr);
	int len = strlen(arr) - 1;
	for (int i = 0; i < (len + 1) / 2; i++) {
		if (arr[i] != arr[len - i]) {
			result = 0;
			break;
		}
	}
	printf("%d", result);
	free(arr);
	return 0;
}