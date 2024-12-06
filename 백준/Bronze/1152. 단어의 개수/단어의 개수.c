#include <stdio.h>
#include <string.h>



int main(void) {
	char arr[1000001];
	scanf("%[^\n]", arr);
	int cnt = 0, len = strlen(arr);
	if (arr[0] == ' ' && len == 1) {
		printf("%d", cnt);
		return 0;
	}
	for (int i = 1; i < len - 1; i++) {
		if (arr[i] == ' ') cnt++;
	}
	printf("%d", cnt + 1);
	
	return 0; 
}