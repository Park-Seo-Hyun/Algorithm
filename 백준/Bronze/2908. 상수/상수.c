#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
	char num1[4], num2[4];
	scanf("%s %s", num1, num2);

	char tmp1 = num1[0];
	num1[0] = num1[2];
	num1[2] = tmp1;

	char tmp2 = num2[0];
	num2[0] = num2[2];
	num2[2] = tmp2;

	int num11 = atoi(num1);
	int num22 = atoi(num2);

	if (num11 > num22) printf("%d", num11);
	else printf("%d", num22);
	return 0;
}