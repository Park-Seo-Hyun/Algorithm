#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int* alpha;
	alpha = (int*)calloc(26, sizeof(int));
	char arr[100];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		int num = arr[i] - 97;
		alpha[num]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}
	free(alpha);

	return 0;
}