#include <stdio.h>

int main(void) {
	int n;
	char arr[80];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", arr);
		int total = 0;
		int seq = 1;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == 'O') {
				if (i > 0 && arr[i - 1] == 'O') seq++;
				else seq = 1;
				total += 1 * seq;
			}
		}
		printf("%d\n", total);
	}

	return 0;
}