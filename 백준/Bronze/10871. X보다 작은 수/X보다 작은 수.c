#include <stdio.h>


int main(void) {
	int n, x, num;
	scanf("%d %d", &n, & x);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (x > arr[i]) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
