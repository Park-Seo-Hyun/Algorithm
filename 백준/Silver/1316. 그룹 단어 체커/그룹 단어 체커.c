#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
	char* arr = (char*)malloc(sizeof(char) * 101);
	int cnt, sub = 0, total = 0;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		int num = 0;
		scanf("%s", arr);
		int len = strlen(arr);
		for (int j = 0; j < len; j++) {
			for (int k = j + 1; k < len; k++) {
				if (arr[j] == arr[k]) {
					sub = k - j;
					if (sub >= 2) {
						if (arr[j] != arr[k - 1]) {
							num++;
						}
					}
				}
			}
		}
		if (num == 0) {
			total++;
		}
	}
	printf("%d", total);
	free(arr);
	return 0;
}