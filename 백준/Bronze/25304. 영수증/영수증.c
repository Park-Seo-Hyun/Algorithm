#include <stdio.h>

int main(void) {

	int total, num, price, n, hap = 0;
	scanf("%d", &total);
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &price, &n);
		hap += price * n;
	}
	if (hap == total) printf("Yes");
	else printf("No");

	return 0;
}