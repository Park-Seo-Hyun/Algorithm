#include <stdio.h>

int main(void) {
	int n;

	while (1) {
		int arr[10000] = { 0, };
		int hap = 0, cnt = 0;
		scanf("%d", &n);
		if (n == -1) return 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				arr[cnt] = i;
				hap += i;
				cnt += 1;
			}
		}
		if (hap == n) {
			printf("%d = ", n);
			for (int i = 0; i < cnt - 1; i++) {
				printf("%d + ", arr[i]);
			}
			printf("%d\n", arr[cnt - 1]);
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
	}
							 
	return 0;				 
}	