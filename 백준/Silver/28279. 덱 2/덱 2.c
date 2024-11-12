#include <stdio.h>


#define MAX_SIZE 1000000

typedef struct {
	int data[MAX_SIZE];
	int front, rear;
}Deque;

void init_deque(Deque* q) {
	q->front = q->rear = 0;
}

int is_empty(Deque* q) {
	return (q->front == q->rear);
}

int is_full(Deque* q) {
	return (q->front == (q->rear + 1) % MAX_SIZE);
}

void add_front(Deque* q, int item) {
	if (is_full(q)) return;
	q->data[q->front] = item;
	q->front = (q->front - 1 + MAX_SIZE) % MAX_SIZE;
}

void add_rear(Deque* q, int item) {
	if (is_full(q)) return;
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->data[q->rear] = item;
}

int delete_front(Deque* q) {
	if (is_empty(q)) return -1;
	q->front = (q->front + 1) % MAX_SIZE;
	return q->data[q->front];
}

int delete_rear(Deque* q) {
	if (is_empty(q)) return -1;
	int prev = q->rear;
	q->rear = (q->rear - 1 + MAX_SIZE) % MAX_SIZE;
	return q->data[prev];
}

int deque_size(Deque* q) {
	if (q->rear >= q->front) return (q->rear - q->front);
	return (MAX_SIZE - (q->front - q->rear));
}

int print_add(Deque* q) {
	if (!is_empty(q)) return q->data[(q->front + 1) % MAX_SIZE];
	else return -1;
}

int print_rear(Deque* q) {
	if (!is_empty(q)) return q->data[q->rear];
	else return -1;
}

int main(void) {
	Deque q;
	init_deque(&q);
	int n;
	scanf("%d", &n);
	while (n--) {
		int order, num;
		scanf("%d", &order);
		switch (order) {
		case 1:
			scanf("%d", &num);
			add_front(&q, num);
			break;
		case 2:
			scanf("%d", &num);
			add_rear(&q, num);
			break;
		case 3:
			printf("%d\n", delete_front(&q));
			break;
		case 4:
			printf("%d\n", delete_rear(&q));
			break;
		case 5:
			printf("%d\n", deque_size(&q));
			break;
		case 6:
			printf("%d\n", is_empty(&q));
			break;
		case 7:
			printf("%d\n", print_add(&q));
			break;
		case 8:
			printf("%d\n", print_rear(&q));
			break;
		}
	}
	
	return 0;
}