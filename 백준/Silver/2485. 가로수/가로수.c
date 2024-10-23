#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(void) {
	int n, min = 1000000001, cnt = 0, GCD;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* num = (int*)malloc(sizeof(int) * (n - 1));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		num[i] = arr[i + 1] - arr[i];
	}
	GCD = num[0];
	for (int i = 1; i < n - 1; i++){
		GCD = gcd(GCD, num[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		cnt += (num[i] / GCD - 1);
	}
	printf("%d", cnt);


	return 0;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}