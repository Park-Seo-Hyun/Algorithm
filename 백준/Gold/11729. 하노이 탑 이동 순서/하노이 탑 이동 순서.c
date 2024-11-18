#include <stdio.h>
#include <math.h>

void hanoi_tower(int n, int from, int temp, int to);


int main(void) {
	int n;
	scanf("%d", &n);
	int cnt = pow(2, n) - 1;
	printf("%d\n", cnt);
	hanoi_tower(n, 1, 2, 3);

	
	return 0; 
}

void hanoi_tower(int n, int from, int temp, int to) {
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, temp);
		printf("%d %d\n", from, to);
		hanoi_tower(n - 1, temp, from, to);
	}

}