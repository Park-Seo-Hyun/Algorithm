#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT (1000000)

int goldPart(int n, int* arr);

int main(void) {
	int* arr = (int*)malloc(sizeof(int) * LIMIT + 1);
	memset(arr, 1, sizeof(int) * LIMIT + 1);
	arr[0] = arr[1] = 0;
	for (int i = 2; i < LIMIT + 1; i++) {
		int j = 2;
		while (i * j <= LIMIT) {
			arr[i * j] = 0;
			j++;
		}
	}
	int t, n;
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d", &n);
		printf("%d\n", goldPart(n, arr));
		t--;
	}
	
	return 0;
}

int goldPart(int n, int* arr) {
	int hap = 0;
	for (int i = 2; i <= n / 2; i++) {
		int j = n - i;
		if (arr[i] && arr[j]) hap++;
	}
	return hap;
}