#include <stdio.h>
#include <string.h>

int main(void) {
	int total[6] = { 1, 1, 2, 2, 2, 8 };
	int arr[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 6; j++) {
		printf("%d ", total[j] - arr[j]);
	}
	return 0;
}