#include <stdio.h>

#define MAX_SIZE 100000

int stack[MAX_SIZE];
int top = -1;

void push(int* stack, int item) {
	if (top == MAX_SIZE - 1) return;
	stack[++top] = item;
}

void delete(int* stack) {
	if (top < 0) return;
	top -= 1;
}

int main(void) {
	int k, order;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &order);
		if (order == 0) delete(stack);
		else push(stack, order);
	}
	int sum = 0;
	for (int i = 0; i < top + 1; i++) {
		sum += stack[i];
	}
	printf("%d", sum);

	return 0;
}