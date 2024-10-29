#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y,z) ((z) = (x), (x) = (y), (y) = (z))

void bubble_sort(int arr[], int n);

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, n);
	printf("%d", arr[k - 1]);

	
	return 0;
}

void bubble_sort(int arr[], int n) {
	int temp;
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[j + 1]) {
				SWAP(arr[j], arr[j + 1], temp);
			}
		}
	}
}