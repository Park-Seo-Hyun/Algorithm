#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void) {

	int H, M, T, A;
	scanf("%d %d %d", &H, &M, &T);

	if (H == M && M == T) A = 10000 + H * 1000;
	else if (H == M || H == T) A = 1000 + H * 100;
	else if (M == T) A = 1000 + M * 100;
	else A =  MAX(MAX(H, M), T) * 100;

	printf("%d", A);

	return 0;
}