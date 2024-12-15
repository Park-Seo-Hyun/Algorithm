#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define LIMIT (1000000)

int main(void) {
    int* arr = (int*)malloc(sizeof(int) * (LIMIT + 1));
    memset(arr, 1, sizeof(int) * (LIMIT + 1));
    arr[0] = 0, arr[1] = 0;
	for (int i = 2; i < (int)sqrt(LIMIT) + 1; i++) {
		int j = 2;
		while (i * j < LIMIT + 1) {
			arr[i * j] = 0;
			j++;
		}
	}

	int n, num;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &num);
		int cnt = 0;
		for (int i = 2; i < num / 2 + 1; i++) {
			int j = num - i;
			if (arr[i] && arr[j]) cnt++;
		}
		printf("%d\n", cnt);
	}
    free(arr);
    return 0;
}