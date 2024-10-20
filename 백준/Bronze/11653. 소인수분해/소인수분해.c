#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 2; i < n + 1; i++) {
		while (n % i == 0) {
			n /= i;
			printf("%d\n", i);
		}
	}
				 
	return 0;				 
}