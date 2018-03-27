#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *temp = (linked_list_t *)begin;
	while(temp != NULL) 
	{
		if(cmp(temp->data, data_ref) == 0)
			return temp;
		temp = temp->next;
	}
	return NULL;
}
