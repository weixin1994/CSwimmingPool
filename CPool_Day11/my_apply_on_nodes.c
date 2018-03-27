#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

int	my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
	while (begin != NULL) 
	{
		f(begin->data);
		begin = begin->next;
	}
	return 0;
}
