#include <stdio.h>
#include <limits.h>

int main(void) {
	int x, y;
	int min_x = INT_MAX, min_y = INT_MAX;
	int max_x = INT_MIN, max_y = INT_MIN;
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &x, &y);
		if (x < min_x) min_x = x;
		if (x > max_x) max_x = x;
		if (y < min_y) min_y = y;
		if (y > max_y) max_y = y;
	}
	printf("%d", (max_x - min_x) * (max_y - min_y));

	
	return 0; 
}