#include <stdio.h>
#include <string.h>

int cnt = 0;

int recursion(char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(char* s) {
	cnt = 0;
	return recursion(s, 0, strlen(s) - 1);
}


int main(void) {
	int n;
	scanf("%d", &n);

	char arr[1001];
	while (n--) {
		scanf("%s", arr);
		printf("%d ", isPalindrome(arr));
		printf("%d\n", cnt);
	}
}