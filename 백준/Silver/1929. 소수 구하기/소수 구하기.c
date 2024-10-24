#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void getPrime(int n, int m);

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	getPrime(n, m);

	return 0;
}

void getPrime(int n, int m) {
	if (n < 2) n = 2;
	for (int i = n; i < m + 1; i++) {
		bool prime = true;
		for (int j = 2; j < (int)sqrt(i) + 1; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime == true) {
			printf("%d\n", i);
		}
	}
}