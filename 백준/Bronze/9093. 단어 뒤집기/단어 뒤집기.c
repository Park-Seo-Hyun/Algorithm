#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	getchar();
	char arr[1001];
	while (n--) {
		scanf("%[^\n]", arr);

		char stack[1001];
		int pos = 0, i = 0, len = strlen(arr);
		while (1) {
			if (arr[pos] == ' ' || pos == len) {
				for (int j = i - 1; j >= 0; j--) {
					printf("%c", stack[j]);
				}
				i = 0, pos++;
				printf(" ");
			}
			if (pos - 1 == len) break;
			stack[i++] = arr[pos++];
		}
		printf("\n");
		getchar();
	}
	
	return 0;
}