#include <stdio.h>
#include <string.h>

int main(void) {
	int n, total = 0;
	char arr[101];
	scanf("%d", &n);
	
	while (n--) {
		scanf("%s", arr);
		int hap = 1;
		for (int i = 0; i < strlen(arr); i++) {
			for (int j = i + 1; j < strlen(arr); j++) {
				if (arr[i] == arr[j]) {
					if (j - i >= 2) {
						if (arr[i] != arr[j - 1]) {
							hap = 0;
						}
					}
				}
			}
		}
		if (hap) total++;
	}
	printf("%d", total);
	return 0; 
}