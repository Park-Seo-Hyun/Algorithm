#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))


int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int min = MIN(MIN(x, w - x), MIN(y , h - y));
	printf("%d", min);

	
	return 0; 
}