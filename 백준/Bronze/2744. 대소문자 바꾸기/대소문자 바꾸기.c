#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (isupper(arr[i])) {
			printf("%c", tolower(arr[i]));
		}
		else if(islower(arr[i])) {
			printf("%c", toupper(arr[i]));
		}
	}
	return 0;
}