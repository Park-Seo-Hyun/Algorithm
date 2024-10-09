#include <stdio.h>

int main(void) {
	char arr[101] = { 0, };
	scanf("%s", arr);
	
	for (int i = 97; i < 123; i++) {
		int j = 0;
		while (arr[j] != 0) {
			if (arr[j] == (char)i) break;

			j++;
		}
		if (arr[j] == (char)i) {
			printf("%d ", j);
		}
		else {
			printf("%d ", -1);
		}

	}

	return 0;
}