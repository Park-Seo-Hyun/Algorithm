#include <stdio.h>

#define MAX_SIZE 100000

int main(void) {
	int n, m, num;
	scanf("%d", &n);
	int queue[MAX_SIZE];
	int queue_stack[MAX_SIZE];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &queue[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &queue_stack[i]);
	}

	scanf("%d", &m);

	for (int i = n - 1; i >= 0 && m != 0; i--) {
		if (queue[i] == 0) {
			printf("%d ", queue_stack[i]);
			m--;
		}
	}
	for (int i = m; m > 0; m--) {
		scanf("%d", &num);
		printf("%d ", num);
	}


	return 0;
}