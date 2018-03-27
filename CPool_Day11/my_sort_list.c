#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
	linked_list_t *list_order;
	linked_list_t *p;
	void *temp;

	if(begin != NULL && *begin != NULL)
	{
		list_order = *begin;
		p = (*begin)->next;
		while (p != NULL)
		{
			if((*cmp)(list_order->data, p->data) > 0)
			{
				temp = list_order->data;
				list_order->data = p->data;
				p->data = temp;
				list_order = *begin;
				p = (*begin)->next;
			}
			else
			{
				list_order = list_order->next;
				p = p->next;
			}
		}
	}
}
