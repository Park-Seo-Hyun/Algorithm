#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100];
	int n, total = 0, pos = 1;
	scanf("%s %d", arr, &n);
	for (int i = strlen(arr) - 1; i >= 0; i--) {
		int num = arr[i];
		if (num >= 65 && num <= 90) {
			num -= 55;
		}
		if (num >= '0' && num <= '9') {
			num -= '0';
		}
		total += num * pos;
		pos *= n;
	}
	printf("%d", total);

	return 0;
}