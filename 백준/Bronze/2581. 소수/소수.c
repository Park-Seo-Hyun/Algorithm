#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, total = 0, min = 10001;
	scanf("%d", &a);
	scanf("%d", &b);
	for (int i = a; i < b + 1; i++) {
		if (i == 1) continue;
		int prime = 1;
		for (int j = 2; j < (int)sqrt(i) + 1; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime) {
			total += i;
			if (i < min) min = i;
		}
	}
	if (total) printf("%d\n%d", total, min);
	else printf("-1");
	return 0;
}