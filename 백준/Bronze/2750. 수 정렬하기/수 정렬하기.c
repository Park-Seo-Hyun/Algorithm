#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(x,y,z) ((z) = (x), (x) = (y), (y) = (z))

void bubble_sort(int arr[], int n);

int main(void) {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	
	
	return 0;
}

void bubble_sort(int arr[], int n) {
	int temp;
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				SWAP(arr[j], arr[j + 1], temp);
			}
		}
	}
}