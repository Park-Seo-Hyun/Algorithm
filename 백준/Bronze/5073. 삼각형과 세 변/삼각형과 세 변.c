#include <stdio.h>

int main(void) {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		int max = a, hap = a + b + c;
		if (b > max) max = b;
		if (c > max) max = c;
		if (hap - max > max) {
			if (a == b && b == c) printf("%s\n", "Equilateral");
			else if (a == b || b == c || a == c) printf("%s\n", "Isosceles");
			else printf("%s\n", "Scalene ");
		}
		else {
			printf("%s\n", "Invalid");
		}
	}

	return 0;
}