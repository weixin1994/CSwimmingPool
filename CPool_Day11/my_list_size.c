#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

int my_list_size(linked_list_t const *begin)
{
	int len = 0;

	while(begin != NULL) 
	{
		begin = begin->next;
		len++;
	}
	return len;
}
