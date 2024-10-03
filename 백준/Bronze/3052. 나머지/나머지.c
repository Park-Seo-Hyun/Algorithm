#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		int hap = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) hap++;
		}
		if (hap == 0) result++;
	}
	printf("%d", result);
	return 0;
}