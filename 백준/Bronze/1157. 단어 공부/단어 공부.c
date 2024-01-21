#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000001];
	scanf("%s", arr);
	int cnt = 0;
	int result = 0;
	int len = strlen(arr);
	int temp[26] = { 0, };
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < len; j++) {
			if (arr[j] == i) {
				temp[i - 'a']++;
			}
		}
	}
	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < len; j++) {
			if (arr[j] == i) {
				temp[i - 'A']++;
			}
		}
	}

	int max = temp[0];
	for (int i = 1; i < 26; i++) {
		if (max < temp[i]) {
			max = temp[i];
			result = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == temp[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		printf("?\n");
	}
	else {
		printf("%c", result + 'A');
	}
	return 0;
}