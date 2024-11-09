#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	char n[100];
	int b, num, hap = 0;
	scanf("%s %d", n, &b);
	int length = strlen(n) - 1;
	for (int i = 0; i < strlen(n); i++) {
		if (n[i] >= '0' && n[i] <= '9') {
			num = n[i] - '0';
		}
		else {
			num = n[i] - 'A' + 10;
		}
		hap += pow(b, length) * num;
		length--;
	}
	printf("%d", hap);

	return 0;
}