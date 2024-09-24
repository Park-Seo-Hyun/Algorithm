#include <stdio.h>

int main(void) {

	int A, B;
	scanf("%d %d", &A, &B);

	if (A > 0) {
		if (B > 0) printf("%d", 1);
		else if (B < 0) printf("%d", 4);
	}
	else if (A < 0) {
		if (B > 0) printf("%d", 2);
		else if (B < 0) printf("%d", 3);
	}

	return 0;
}