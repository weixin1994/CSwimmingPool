#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *temp = *begin;
	linked_list_t *del_dest = temp->next;
	while(del_dest != NULL)
	{
		if(temp != NULL && temp == *begin && (*cmp)(temp->data,data_ref) == 0)
		{
			*begin = (*begin)->next;
			free(temp);
			temp = *begin;
			del_dest = temp->next;
		}
		else
		{
			if(del_dest != NULL && (*cmp)(del_dest->data,data_ref) == 0)
			{
					temp->next = del_dest->next;
					free(del_dest);
					if(temp->next != NULL)
						del_dest = temp->next;
					else
						del_dest = temp->next;
			}
		}
		if(del_dest != NULL)
		{
			temp = del_dest;
			del_dest = temp->next;
		}
	}
	return 0;
}
