#include <stdio.h>
#include <string.h>


int main(void) {
	char arr[6];
	while (1) {
		scanf("%s", arr);
		if (strcmp(arr, "0") == 0) break;
		int palin = 1;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] != arr[strlen(arr) - i - 1]) {
				palin = 0;
				break;
			}
		}
		if (palin) printf("yes\n");
		else printf("no\n");

	}

	return 0;
}