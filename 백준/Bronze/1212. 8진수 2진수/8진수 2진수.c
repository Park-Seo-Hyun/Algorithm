#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char* arr = (char*)malloc(sizeof(char) * 333335);
	scanf("%s", arr);

	int len = strlen(arr);

	char first[8][4] = { "", "1", "10", "11", "100", "101", "110", "111" };
	char binary[8][4] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	
	if (arr[0] == '0') printf("0");
	else {
		printf("%s", first[arr[0] - '0']);
		for (int i = 1; i < len; i++) {
			printf("%s", binary[arr[i] - '0']);
		}
	}
	free(arr);
	return 0;
}