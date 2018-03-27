#include <stdio.h>
#include <stdlib.h>
#include "./include/linked_list.h"
#include "./include/my.h"

int	my_add_in_list(linked_list_t **list, char *av)
{
	linked_list_t *elem;
	elem = malloc(sizeof(*elem));
	elem->data = av;
	elem->next = *list;
	*list = elem;
	return 0;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
	linked_list_t *test_list = NULL;
	int i = 0;

	while (i < ac) 
	{
		my_add_in_list(&test_list, av[i]);
		i++;
	}
	return test_list;
}
