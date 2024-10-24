#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT (123456 * 2)

int main(void) {
	int* prime = (int*)malloc(sizeof(int) * (LIMIT + 1));
	memset(prime, 1, sizeof(int) * (LIMIT + 1));
	prime[1] = 0;
	for (int i = 2; i < LIMIT + 1; i++) {
		int j = 2;
		while (i * j <= LIMIT) {
			prime[i * j] = 0;
			j++;
		}
	}
	while (1) {
		int n, hap = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = n + 1; i < 2 * n + 1; i++) {
			if (prime[i]) hap++;
		}
		printf("%d\n", hap);
	}
	
	return 0;
}