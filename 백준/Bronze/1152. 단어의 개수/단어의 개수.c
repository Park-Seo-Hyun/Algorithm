#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000000];
	int num = 0;
	scanf("%[^\n]", arr);
	int len = strlen(arr);
	if (len == 1) {
		if (arr[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}
	for (int i = 1; i < len - 1; i++) {
		if (arr[i] == ' ') {
			num++;
		}
	}
	printf("%d\n", num + 1);
	return 0;
}