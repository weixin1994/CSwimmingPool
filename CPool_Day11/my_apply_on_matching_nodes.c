#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(), void const *data_ref, int(*cmp)())
{
	while(begin != NULL)
	{
		if(begin != NULL && cmp(begin->data, data_ref) == 0)
			f(begin->data);
		begin = begin->next;
	}
	return 0;
}
