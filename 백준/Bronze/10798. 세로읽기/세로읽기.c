#include <stdio.h>
#include <string.h>


int main(void) {
	char arr[5][16];
	for (int i = 0; i < 5; i++) {
		scanf("%15s", arr[i]);
	}

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < strlen(arr[j])) {
				printf("%c", arr[j][i]);
			}
		}
	}
	return 0; 
}