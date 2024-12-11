#include <stdio.h>

int main(void) {
	int n;
	
	while (1) {
		scanf("%d", &n);

		if (n == -1) break;
		int arr[10000];
		int sum = 0, index = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				arr[index++] = i;
			}
		}
		if (sum == n) {
			printf("%d = %d", n, arr[0]);
			for (int i = 1; i < index; i++) {
				printf(" + %d", arr[i]);
			}
			printf("\n");
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
	}
	return 0; 
}