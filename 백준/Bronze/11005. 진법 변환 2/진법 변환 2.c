#include <stdio.h>

void change(int n, int b) {
	if (n > 0) {
		change(n / b, b);
		int num = n % b;
		if (num >= 10 && num <= 35) {
			num += 55;
			printf("%c", num);
		}
		else printf("%d", num);
	}
}

int main(void) {
	int n, b;
	scanf("%d %d", &n, &b);
	change(n, b);

	return 0;
}