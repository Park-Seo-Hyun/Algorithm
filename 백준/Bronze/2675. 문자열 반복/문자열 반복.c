#include <stdio.h>
#include <string.h>



int main(void) {
	char arr[21];
	int n, m;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %s", &m, arr);
		for (int i = 0; i < strlen(arr); i++) {
			for (int j = 0; j < m; j++) {
				printf("%c", arr[i]);
			}
		}
        printf("\n");
	}
	return 0; 
}