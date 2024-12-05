#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	int* arr = (int*)malloc(sizeof(int) * (n + 1));
	for (int i = 0; i < n + 1; i++) {
		arr[i] = i;
	}
	int a, b;
	while (m--) {
		scanf("%d %d", &a, &b);
		int tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}
	for (int i = 1; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	return 0; 
}