#include <stdio.h>
#include <string.h>

int main(void) {
	int alpha[26] = { 0, };
	char arr[1000001];
	scanf("%s", arr);
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == i) {
				alpha[i - 'a']++;
			}
		}
	}
	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == i) {
				alpha[i - 'A']++;
			}
		}
	}

	int max = alpha[0];
	int number = 0;
	for (int i = 1; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			number = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		printf("?\n");
	}
	else {
		printf("%c\n", number + 'A');
	}
	return 0; 
}