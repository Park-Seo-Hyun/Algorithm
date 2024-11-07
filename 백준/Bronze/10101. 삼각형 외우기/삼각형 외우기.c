#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c == 180) {
		if (a == b && a == c) printf("%s", "Equilateral");
		else if (a == b || b == c || a == c) printf("%s", "Isosceles");
		else printf("%s", "Scalene");
	}
	else printf("%s", "Error");

	return 0;
}