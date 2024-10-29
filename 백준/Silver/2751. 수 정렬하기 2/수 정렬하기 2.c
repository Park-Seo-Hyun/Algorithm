#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y,z) ((z) = (x), (x) = (y), (y) = (z))

int sorted[1000000];
void merge(int* arr, int left, int mid, int right);
void merge_sorted(int* arr, int left, int right);

int main(void) {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	merge_sorted(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

void merge(int* arr, int left, int mid, int right) {
	int i = left, j = mid + 1, k = left, l;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}
	if (i > mid) {
		for (l = j; l <= right; l++) {
			sorted[k++] = arr[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			sorted[k++] = arr[l];
		}
	}
	for (l = left; l <= right; l++) arr[l] = sorted[l];
}

void merge_sorted(int* arr, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sorted(arr, left, mid);
		merge_sorted(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}