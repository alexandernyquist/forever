#include "stdio.h"
#include "stdlib.h"

#define QUEUE_MAX_SIZE 2

struct queue {
	int* values;
	int enqueuer;
	int size;
	int dequeuer;
};

void queue_init(struct queue *q) {
	q->values = (int *)malloc(sizeof(struct queue) * QUEUE_MAX_SIZE);
	q->enqueuer = 0;
	q->size = 0;
	q->dequeuer = 0;
};

void queue_enqueue(struct queue *q, int value) {
	q->values[q->enqueuer] = value;
	q->size++;
	q->enqueuer++;
}

int queue_dequeue(struct queue *q) {
	int val = q->values[q->dequeuer];
	q->dequeuer++;
	q->size--;
	return val;
}

int queue_size(struct queue *q) {
	return q->size;
}