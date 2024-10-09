#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000000];
	scanf("%[^\n]", arr);
	int len = strlen(arr), num = 0;
	if (arr[0] == ' ') {
		if (len == 1) {
			printf("%d", num);
			return 0;
		}
	}
	for (int i = 1; i < len - 1; i++) {
		if (arr[i] == ' ') num++;
	}
	printf("%d", num + 1);

	return 0;
}