#include <stdio.h>

int main(void) {
	int n, b, i = 0, num;
	char arr[101];
	scanf("%d %d", &n, &b);
	while (n > 0) {
		num = n % b;
		if (num >= 10) {
			arr[i] = num + 55;
		}
		else {
			arr[i] = num + '0';
		}
		n /= b;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%c", arr[j]);
	}

	return 0;
}