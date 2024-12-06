#include <stdio.h>
#include <string.h>


int main(void) {
	int n;
	scanf("%d", &n);
	char arr[1000];
	while (n--) {
		scanf("%s", arr);
		printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}
	return 0; 
}