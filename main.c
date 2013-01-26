#include "stdio.h"
#include "stdlib.h"
#include "stack.c"

int main() {
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	
	stack_init(s);
	stack_push(s, 4);
	stack_push(s, 3);
	stack_push(s, 2); // Why can i do this?

	while(stack_size(s) > 0) {
		printf("%d\n", stack_pop(s));
	}
	
	return 0;
}
