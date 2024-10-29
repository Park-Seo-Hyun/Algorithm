#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(x,y,z) ((z) = (x), (x) = (y), (y) = (z))

void bubble_sort(int arr[], int n);

int main(void) {
	int arr[5];
	int hap = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		hap += arr[i];
	}
	int average = hap / 5;
	bubble_sort(arr, 5);
	printf("%d\n%d", average, arr[2]);
	
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