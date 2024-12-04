#include <stdio.h>

int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);

	m -= 45;
	if (m < 0) {
		m += 60;
		h = (h - 1 + 24) % 24;
	}
	
	printf("%d %d", h, m);
	return 0; 
}