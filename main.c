#include "stdio.h"
#include "stdlib.h"
#include "stack.c"
#include "queue.c"
#include "linkedlist.c"

int main() {
	printf("== Stack tests ==\n");
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	
	stack_init(s);
	stack_push(s, 4);
	stack_push(s, 3);
	stack_push(s, 2); // Why can i do this?

	while(stack_size(s) > 0) {
		printf("%d\n", stack_pop(s));
	}

	stack_push(s, 9);
	stack_push(s, 80);

	printf("%d\n", stack_pop(s));
	printf("%d\n", stack_pop(s));

	printf("== End of stack tests ==\n");

	printf("== Queue tests ==\n");
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	
	queue_init(q);
	queue_enqueue(q, 4);
	queue_enqueue(q, 3);
	queue_enqueue(q, 2);

	while(queue_size(q) > 0) {
		printf("%d\n", queue_dequeue(q));
	}

	queue_enqueue(q, 3);
	queue_enqueue(q, 9);
	printf("%d\n", queue_dequeue(q));
	printf("%d\n", queue_dequeue(q));

	printf("== End of queue tests ==\n");
	
	printf("== Linked list tests ==\n");
	struct list_item *head = (struct list_item*)malloc(sizeof(struct list_item));
	head->val = 1;

	for(int c = 2; c < 10; c++) {
		*head = list_append(head, 2);
		printf("Adding %d to list\n", c);
	}

	while(head) {
		printf("Current value: %d \n", head->val);
		head = head->prev;
	}

	return 0;
}
