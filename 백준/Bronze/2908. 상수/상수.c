#include <stdio.h>
#include <string.h>

int change(char num[]);

int main(void) {
	char num1[4], num2[4];
	scanf("%s %s", num1, num2);
	int n1 = change(num1);
	int n2 = change(num2);
	if (n1 > n2) printf("%d", n1);
	else printf("%d", n2);


	return 0;
}

int change(char num[]) {
	int len = strlen(num);
	for (int i = 0; i < len / 2; i++) {
		int temp = num[i];
		num[i] = num[len - i - 1];
		num[len - i - 1] = temp;
	}

	return atoi(num);
}