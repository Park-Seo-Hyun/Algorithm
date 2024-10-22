#include <stdio.h>

int gcd(int a, int b);

int main(void) {
	int arr[5];
	int n = 2;
	for (int i = 0; i < 2 * n; i += 2) {
		scanf("%d %d", &arr[i], &arr[i + 1]);
	}
	int num1 = arr[0] * arr[3] + arr[2] * arr[1];
	int num2 = arr[1] * arr[3];
	int g = gcd(num1, num2);
	printf("%d %d", num1 / g, num2 / g);

	return 0;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}