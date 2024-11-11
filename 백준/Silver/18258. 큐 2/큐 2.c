#include <stdio.h>
#include <string.h>

#define MAX_SIZE 2000000

typedef struct Queue{
	int front, rear;
	int data[MAX_SIZE];
}Queue;

void init_queue(Queue* q) {
	q->front = -1;
	q->rear = -1;
}

int is_empty(Queue* q) {
	return (q->front == q->rear);
}

int queue_size(Queue* q) {
	if (is_empty(q)) return 0;
	else return (q->rear - q->front);
}

void push(Queue* q, int x) {
	q->data[++(q->rear)] = x;
}

int pop(Queue* q) {
	if (is_empty(q)) return -1;
	else return q->data[++(q->front)];
}

int front(Queue* q) {
	if (is_empty(q)) return -1;
	return q->data[q->front + 1];
}

int back(Queue* q) {
	if (is_empty(q)) return -1;
	return q->data[q->rear];
}

int main(void) {
	Queue q;
	init_queue(&q);
	
	int n;
	scanf("%d", &n);

	while (n--) {
		char mission[6];
		scanf("%s", mission);
		if (!strcmp(mission, "push")) {
			int data;
			scanf("%d", &data);
			push(&q, data);
		}
		else if (!strcmp(mission, "front")) printf("%d\n", front(&q));
		else if (!strcmp(mission, "back")) printf("%d\n", back(&q));
		else if (!strcmp(mission, "size")) printf("%d\n", queue_size(&q));
		else if (!strcmp(mission, "empty")) printf("%d\n", is_empty(&q));
		else if (!(strcmp(mission, "pop"))) printf("%d\n", pop(&q));
	}

	return 0;
}