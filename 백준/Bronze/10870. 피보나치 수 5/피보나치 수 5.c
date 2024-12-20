#include <stdio.h>

int fibo(int n) {
	if (n == 0 || n == 1) return n;
	else {
		int tmp, last = 0, current = 1;
		for (int i = 2; i < n + 1; i++) {
			tmp = last + current;
			last = current;
			current = tmp;
		}
		return current;
	}
}


int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));

}