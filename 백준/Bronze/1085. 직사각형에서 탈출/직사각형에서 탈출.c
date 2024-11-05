#include <stdio.h>

#define min(x, y) (x) < (y) ? (x) : (y)

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int a = min(x, w - x);
	int b = min(y, h - y);
	printf("%d", min(a, b));

	return 0;
}