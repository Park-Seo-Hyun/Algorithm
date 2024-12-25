#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(void) {
	int n, m, arr[100];
	scanf("%d", &n);

	while (n--) {
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d", &arr[i]);
		}
		long long int sum = 0;
		for (int i = 0; i < m - 1; i++) {
			for (int j = i + 1; j < m; j++) {
				sum += gcd(arr[i], arr[j]);
			}
		}
		printf("%lld\n", sum);
	}

	return 0;
}