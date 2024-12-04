#include <stdio.h>

int main(void) {

	int H, M, T;
	scanf("%d %d", &H, &M);
	scanf("%d", &T);

	M += T;

	if (M >= 60) {
		H = (H + (M / 60))% 24;
		M %= 60;
	}

	printf("%d %d", H, M);
	return 0;
}