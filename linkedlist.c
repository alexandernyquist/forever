#include "stdio.h"
#include "stdlib.h"

struct list_item {
	int val;
	struct list_item *next;
	struct list_item *prev;
};

struct list_item list_append(struct list_item *item, int val) {
	struct list_item *n = (struct list_item*)malloc(sizeof(struct list_item));
	n->val = val;
	n->prev = item;
	item->next = n;

	return *n;
}