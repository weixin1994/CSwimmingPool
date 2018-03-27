#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

void my_rev_list(linked_list_t **begin)
{
	linked_list_t *list;
	linked_list_t *temp;
	linked_list_t *next_elem;

	list = *begin;
	temp = NULL;
	while(list->next) 
	{
		next_elem = list->next;
		list->next = temp;
		temp = list;
		list = next_elem;
	}
	list->next = temp;
	*begin = list;
}
