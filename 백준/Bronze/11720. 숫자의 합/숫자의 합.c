#include <stdio.h>

int main() {
	char arr[100];
	int hap = 0;
	int num;
	scanf("%d", &num);
	scanf("%s", arr);
	for (int i = 0; i < num; i++) {
		hap += arr[i] - '0';
	}
	printf("%d", hap);
	return 0;
}