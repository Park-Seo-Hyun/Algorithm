#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(void) {
	char* s = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", s);
	int len = strlen(s);
	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (s[j] < s[j + 1]) {
				char temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%c", s[i]);
	}


	return 0;
}