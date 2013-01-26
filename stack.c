#include "stdio.h"
#include "stdlib.h"

#define STACK_MAX_SIZE 2

// Defines the basic structure of a stack
struct stack {
	int* values;
	int top;
};

// Initializes a stack
void stack_init(struct stack *s) {
	s->top = -1;
	s->values = (int*)malloc(STACK_MAX_SIZE);
}

// Pushes a new item onto the stack
void stack_push(struct stack *s, int value) {
	// TODO: Check for overflow
	s->top += 1;
	s->values[s->top] = value;
}

// Pop the topmost item off of the stack
int stack_pop(struct stack *s) {
	// TODO: Check for underflow
	int val = s->values[s->top];
	s->top -= 1;
	return val;
}

// Return the current size of the stack
int stack_size(struct stack *s) {
	return s->top + 1;
}
