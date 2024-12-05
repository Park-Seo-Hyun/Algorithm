#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * (n + 1));
	for (int i = 0; i < n + 1; i++) {
		arr[i] = i;
	}
	while (m--) {
		scanf("%d %d", &i, &j);
		while (i < j) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	for (int i = 1; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0; 
}