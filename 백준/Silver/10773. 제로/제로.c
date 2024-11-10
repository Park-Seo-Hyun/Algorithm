#include <stdio.h>

#define MAX 100000

int stack[MAX];
int top = -1;

void push(int n) {
	if (top == MAX - 1) return;
	stack[++top] = n;
}

void pop() {
	if (top < 0) return;
	else {
		stack[top] = 0;
		top--;
	}
}

int main(void) {
	int hap = 0;
	int k, n;
	scanf("%d", &k);
	while (k > 0) {
		scanf("%d", &n);
		if (n == 0) pop();
		else push(n);
		k--;
	}
	for (int i = 0; i < top + 1; i++) {
		hap += stack[i];
	}
	printf("%d", hap);

	return 0;
}