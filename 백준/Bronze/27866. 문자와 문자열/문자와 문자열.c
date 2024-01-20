#include<stdio.h>
int main() {
	char arr[1000];
	int num;
	scanf("%s", arr);
	scanf("%d", &num);
	printf("%c", arr[num - 1]);
	return 0;
}