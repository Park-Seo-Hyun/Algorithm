#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	int a, b, c;
	while (m--) {
		scanf("%d %d %d", &a, &b, &c);
		for (int i = a - 1; i < b; i++) {
			arr[i] = c;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0; 
}
