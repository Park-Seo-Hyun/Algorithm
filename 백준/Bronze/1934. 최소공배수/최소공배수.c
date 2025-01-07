#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(void) {
	int n, x, y;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &x, &y);
		printf("%d\n", x * y / gcd(x, y));
	}
	return 0;
}