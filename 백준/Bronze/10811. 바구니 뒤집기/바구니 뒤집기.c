#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int n, m, I, J;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	while (m > 0) {
		scanf("%d %d", &I, &J);
		while (I < J) {
			int temp = arr[I - 1];
			arr[I - 1] = arr[J - 1];
			arr[J - 1] = temp;
			I++;
			J--;
		}
		m--;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}