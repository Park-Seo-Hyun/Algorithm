#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
	int prime = 1;
	for (int i = 2; i < (int)sqrt(n) + 1; i++) {
		if (n % i == 0) {
			prime = 0;
			break;
		}
	}
	if (prime) return 1;
	else return 0;
}


int main(void) {
	int n, m;
	scanf("%d", &n); 
	
	while (n--) {
		scanf("%d", &m);
		int num = 2;
		for (int i = 2; i <= m / 2; i++) {
			if (isPrime(i) && isPrime(m - i)) {
				if (i > num) num = i;
			}
		}
		printf("%d %d\n", num, m - num);
	}

	return 0;
}