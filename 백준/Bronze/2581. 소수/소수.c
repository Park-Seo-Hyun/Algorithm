#include <stdio.h>

int main(void) {
	int m, n, min = 10001, total = 0;
	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = m; i < n + 1; i++) {
		int hap = 0;
		for (int j = 1; j < i + 1; j++) {
			if (i % j == 0) hap++;
		}
		if (hap == 2) {
			total += i;
			if (i < min) min = i;
		}
	}
	if(total == 0) printf("-1");
	else printf("%d\n%d", total, min);
						 
	return 0;				 
}	