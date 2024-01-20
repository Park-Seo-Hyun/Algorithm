#include <stdio.h>
#include <string.h>
int main() {
	char arr[1000];
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		while (num--) {
			scanf("%s", arr);
			printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
		}
	}
	
	return 0;
}