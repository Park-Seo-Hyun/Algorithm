#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void) {
	int t, a, b;
	scanf("%d", &t);
	while (t > 0) {
		int mul = 1;
		scanf("%d %d", &a, &b);
		int min = MIN(a, b);
		for (int i = 2; i <= min; i++) {
			while (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				mul *= i;
			}
		}
		mul = mul * a * b;
		printf("%d\n", mul);
		t--;
	}
				 
	return 0;				 
}	