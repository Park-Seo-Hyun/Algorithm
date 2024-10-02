#include <stdio.h>

int main(void) {
	int num, size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	int hap = 0;
	scanf("%d", &num);
	for (int i = 0; i < size; i++) {
		if (num == arr[i]) {
			hap++;
		}
	}
	printf("%d", hap);
	return 0;
}