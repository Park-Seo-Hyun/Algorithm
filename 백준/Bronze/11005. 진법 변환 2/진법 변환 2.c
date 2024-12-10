#include <stdio.h>

void change(int n, int m) {
	if (n > 0) {
		change(n / m, m);
		int remain = n % m;
		if (remain >= 10 && remain <= 35) {
			printf("%c", remain + 55);
		}
		else {
			printf("%d", remain);
		}
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	change(n, m);
	
	return 0; 
}