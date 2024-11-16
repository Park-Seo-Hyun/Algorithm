#include <stdio.h>
#include <string.h>

int cnt = 0;
int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);

int main(void) {
	int n;
	char arr[1001];

	scanf("%d", &n);

	while (n--) {
		scanf("%s", arr);
		printf("%d ", isPalindrome(arr));
		printf("%d\n", cnt);
	}

	return 0;
}

int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s){
	cnt = 0;
	return recursion(s, 0, strlen(s) - 1);
}