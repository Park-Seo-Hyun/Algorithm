#include <stdio.h>


int main(void) {
	int arr[9];
	int max = arr[0];
	int num = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 1 || arr[i] > 99) {
			scanf("%d", &arr[i]);
		}
		if (max < arr[i]) {
			max = arr[i];
			num = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
	return 0;
}
