#include <stdio.h>
#include <limits.h>

int main(void) {
	int n, x, y;
	int max_x = INT_MIN, min_x = INT_MAX;
	int max_y = INT_MIN, min_y = INT_MAX;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x > max_x) max_x = x;
		if (x < min_x) min_x = x;
		if (y > max_y) max_y = y;
		if (y < min_y) min_y = y;

	}
	printf("%d", (max_x - min_x) * (max_y - min_y));


	return 0;
}