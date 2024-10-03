#include <stdio.h>
#include <string.h>


int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	memset(arr, 0, sizeof(int) * n);
	int a, b, c;
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a - 1; j < b; j++) {
			arr[j] = c;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
