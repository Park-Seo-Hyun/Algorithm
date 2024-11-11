#include <stdio.h>

#define SIZE 500001

typedef struct {
	int data[SIZE];
	int front, rear;
}Queue;

Queue q;

void init_queue(Queue* q) {
	q->front = q->rear = 0;
}

int is_empty(Queue* q) {
	return (q->front == q->rear);
}

int is_full(Queue* q) {
	return ((q->rear + 1) % SIZE == q->front);
}

void enqueue(Queue* q, int n) {
	if (is_full(q)) return;
	q->rear = (q->rear + 1) % SIZE;
	q->data[q->rear] = n;
}

int dequeue(Queue* q) {
	if (is_empty(q)) return -1;
	q->front = (q->front + 1) % SIZE;
	return q->data[q->front];
}


int main(void) {
	
	init_queue(&q);
	int n, card;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		enqueue(&q, i + 1);
	}
	while (!is_empty(&q)) {
		card = dequeue(&q);
		if (is_empty(&q)) break;
		card = dequeue(&q);
		enqueue(&q, card);
	}
	printf("%d", card);
	
	return 0;
}