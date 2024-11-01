#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n, m;
	int arr[10001] = { 0, };
	scanf("%d", &n);
	while (n > 0) {
		scanf("%d", &m);
		arr[m] += 1;
		n--;
	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}