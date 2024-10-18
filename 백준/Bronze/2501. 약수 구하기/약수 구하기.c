#include <stdio.h>

int main(void) {
	int arr[10000] = { 0,  };
	int n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i < n + 1; i++) {
		if (n % i == 0) {
			arr[cnt] = i;
			cnt++;
		}
	}
	if (cnt < k) printf("%d", 0);
	else printf("%d", arr[k - 1]);
							 
	return 0;				 
}	