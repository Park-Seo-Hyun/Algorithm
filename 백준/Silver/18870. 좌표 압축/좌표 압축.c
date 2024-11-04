#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
	int x;
	int index;
} Place;

int compare(const void* a, const void* b) {
	Place A = *(Place*)a;
	Place B = *(Place*)b;
	if (A.x > B.x) return 1;
	else if (A.x < B.x) return -1;
	else return 0;
}


int main(void) {
	int n;
	scanf("%d", &n);
	Place* arr = (Place*)malloc(sizeof(Place) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i].x);
		arr[i].index = i;
	}
	qsort(arr, n, sizeof(Place), compare);
	int* result = (int*)malloc(sizeof(int) * n);
	int cnt = -1, min = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i].x != min) {
			min = arr[i].x;
			cnt++;
		}
		result[arr[i].index] = cnt;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", result[i]);
	}
	

	return 0;
}