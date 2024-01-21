#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
	char* arr = (int*)malloc(sizeof(int) * 101);
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '=') {
			if (arr[i - 1] == 'c') {
				len--;
			}
			else if (arr[i - 1] == 's') {
				len--;
			}
			else if (arr[i - 1] == 'z') {
				len--;
				if (arr[i - 2] == 'd') {
					len--;
				}
			}
		}
		else if (arr[i] == '-') {
			if (arr[i - 1] == 'c') {
				len--;
			}
			else if (arr[i - 1] == 'd') {
				len--;
			}
		}
		else if (arr[i] == 'j') {
			if (arr[i - 1] == 'l') {
				len--;
			}
			else if (arr[i - 1] == 'n') {
				len--;
			}
		}
	}
	printf("%d", len);
	free(arr);
	return 0;
}