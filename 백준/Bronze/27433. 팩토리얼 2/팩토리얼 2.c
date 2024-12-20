#include <stdio.h>

long long int factorial(long long int n) {
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}


int main(void) {
	long long int n;
	scanf("%lld", &n);
	if (n < 0 || n > 20) {
		scanf("%lld", &n);
	}
	printf("%lld", factorial(n));
}