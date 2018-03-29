#include <stdio.h>
#include <stdlib.h>
#include "./include/btree.h"

btree_t *btree_create_node(void *item)
{
	btree_t *node;

	if(!(node = (btree_t*)malloc(sizeof(btree_t))))
		return NULL;
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return node;
}
