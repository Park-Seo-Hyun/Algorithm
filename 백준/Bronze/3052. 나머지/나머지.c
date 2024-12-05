#include <stdio.h>

int main(void) {
	int arr[10];
	int total = 0, num;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		arr[i] = num % 42;
	}
	for (int i = 0; i < 10; i++) {
		int hap = 0;
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) hap++;
		}
		if (hap == 0) total++;
	}
	printf("%d", total);
	return 0; 
}