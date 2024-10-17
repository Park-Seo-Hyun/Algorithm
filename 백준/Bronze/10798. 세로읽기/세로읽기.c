#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[5][16];
	for (int i = 0; i < 5; i++) {
		scanf("%15s", arr[i]);
	}
	for (int j = 0; j < 16; j++) {
		for (int i = 0; i < 5; i++) {
			if (j < strlen(arr[i])) {
				printf("%c", arr[i][j]);
			}
		}
	}
							 
	return 0;				 
}	