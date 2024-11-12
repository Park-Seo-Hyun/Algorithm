#include <stdio.h>

#define MAX_SIZE 1001

typedef struct {
	int paper;
	int value;
}Paper;

typedef struct {
	 Paper data[MAX_SIZE];
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

void add_front(Deque* q, int item, int number) {
	if (is_full(q)) return;
	q->data[q->front].value = item;
	q->data[q->front].paper = number;
	q->front = (q->front - 1 + MAX_SIZE) % MAX_SIZE;
}

void add_rear(Deque* q, int item, int number) {
	if (is_full(q)) return;
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->data[q->rear].value = item;
	q->data[q->rear].paper = number;
}

int delete_front(Deque* q) {
	if (is_empty(q)) return -1;
	q->front = (q->front + 1) % MAX_SIZE;
	return q->data[q->front].value;
}

int delete_rear(Deque* q) {
	if (is_empty(q)) return -1;
	int prev = q->rear;
	q->rear = (q->rear - 1 + MAX_SIZE) % MAX_SIZE;
	return q->data[prev].value;
}

int get_front_paper(Deque* q) {
	return q->data[(q->front + 1) % MAX_SIZE].paper;
}

int get_rear_paper(Deque* q) {
	return q->data[q->rear].paper;
}

int main(void) {
	int n, paper , num, paper_num;
	scanf("%d", &n);
	Deque q;
	init_deque(&q);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &paper);
		add_rear(&q, i + 1, paper);
	}
	num = get_front_paper(&q);
	printf("%d ", delete_front(&q));
	while (!is_empty(&q)) {
		if (num > 0) {
			for (int i = 0; i < num - 1; i++) {
				paper_num = get_front_paper(&q);
				add_rear(&q, delete_front(&q), paper_num);
			}
			num = get_front_paper(&q);
			printf("%d ", delete_front(&q));
		}
		else {
			for (int i = num + 1; i < 0; i++) {
				paper_num = get_rear_paper(&q);
				add_front(&q, delete_rear(&q), paper_num);
			}
			num = get_rear_paper(&q);
			printf("%d ", delete_rear(&q));
		}

	}
	return 0;
}