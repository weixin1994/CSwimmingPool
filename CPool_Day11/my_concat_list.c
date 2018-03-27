#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
	linked_list_t *temp = NULL;
	temp = *begin1;
	while(temp != NULL) 
	{
		if(temp->next == NULL)
		{
			temp->next = begin2;
			break;
		}
		temp = temp->next;
	}
}
