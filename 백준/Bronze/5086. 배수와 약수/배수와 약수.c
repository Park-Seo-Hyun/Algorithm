#include <stdio.h>

int main(void) {
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0) return 0;

		if (y % x == 0) {
			printf("%s\n", "factor");
		}
		else if (x % y == 0) {
			printf("%s\n", "multiple");
		}
		else printf("%s\n", "neither");
	}
							 
	return 0;				 
}