#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101];
	while (scanf("%[^\n]s", arr) != EOF) {
		printf("%s\n", arr);
		getchar();
	}
	return 0;
}