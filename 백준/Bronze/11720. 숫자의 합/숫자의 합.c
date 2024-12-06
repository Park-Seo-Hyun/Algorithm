#include <stdio.h>



int main(void) {
	char arr[101];
	int n, sum = 0;
	scanf("%d", &n);
	scanf("%s", arr);
	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}
	printf("%d", sum);
	return 0; 
}