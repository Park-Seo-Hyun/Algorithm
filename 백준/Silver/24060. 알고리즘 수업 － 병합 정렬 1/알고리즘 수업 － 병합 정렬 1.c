#include <stdio.h>

int arr[500000];
int tmp[500001];
int cnt = 0, result = -1, n, k;

void merge(int* A, int p, int q, int r);
void merge_sort(int* A, int p, int r);


int main(void) {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	merge_sort(arr, 0, n - 1);
	printf("%d", result);
	
	return 0; 
}

void merge(int* A, int p, int q, int r) {
	int i = p, j = q + 1, t = 1;
	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			tmp[t++] = A[i++];
		}
		else tmp[t++] = A[j++];
	}
	while (i <= q) tmp[t++] = A[i++];
	while (j <= r) tmp[t++] = A[j++];
	i = p, t = 1;
	while (i <= r) {
		A[i++] = tmp[t++];
		cnt++;
		if (cnt == k) {
			result = A[i - 1];
			break;
		}
	}
}

void merge_sort(int* A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}