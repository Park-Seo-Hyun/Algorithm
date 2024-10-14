#include <stdio.h>
#include <string.h>

int main(void) {
	int num, total = 0;
	scanf("%d", &num);
	
	while (num > 0) {
		char arr[101];
		int hap = 0;
		scanf("%s", arr);
		int len = strlen(arr);
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				if (arr[i] == arr[j]) {
					int sub = j - i;
					if (sub >= 2) {
						if (arr[i] != arr[j - 1]) hap++;
					}
				}
			}
		}
		if (hap == 0) total++;
		num--;
	}
	printf("%d", total);

	return 0;
}