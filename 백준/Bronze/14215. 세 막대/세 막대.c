#include <stdio.h>

int main(void) {
	int x[3];
	scanf("%d %d %d", &x[0], &x[1], &x[2]);
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (x[j] > x[j + 1]) {
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	if (x[0] + x[1] > x[2]) printf("%d", x[0] + x[1] + x[2]);
	else printf("%d", 2 * (x[0] + x[1]) - 1);


	return 0;
}