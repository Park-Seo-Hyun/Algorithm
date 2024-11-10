#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	char stack[51];
	int left = 0, right = 0;
	while (t > 0) {
		scanf("%s", stack);
		for (int i = 0; i < strlen(stack); i++) {
			if (stack[i] == '(') left++;
			else if (stack[i] == ')') right++;

			if (right > left) break;
		}
		if (left != right) printf("NO\n");
		else printf("YES\n");
		left = 0, right = 0;
		t--;
	}

	return 0;
}