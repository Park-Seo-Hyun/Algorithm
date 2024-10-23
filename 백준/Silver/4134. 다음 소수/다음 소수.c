#include <stdio.h>
#include <math.h>
#include <stdbool.h>

long long getPrime(long long n);

int main(void) {
	int n;
	long long num;
	scanf("%d", &n);
	while (n > 0) {
		scanf("%lld", &num);
		printf("%lld\n", getPrime(num));
		n--;
	}

	return 0;
}

long long getPrime(long long n) {
	if (n < 2) return 2;
	while (1) {
		bool prime = true;
		for (int i = 2; i < (long long)sqrt(n) + 1; i++) {
			if (n % i == 0) {
				prime = false;
				break;
			}
		}
		if (prime) return n;
		n++;
	}
}