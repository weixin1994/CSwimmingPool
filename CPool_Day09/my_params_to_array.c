#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
	int i;
	struct info_param *para_info;
	para_info = malloc(sizeof(struct info_param) * (ac + 1));
	for (i = 0; i < ac; i++) 
	{
		para_info[i].length = my_strlen(av[i]);
		para_info[i].str = av[i];
		para_info[i].copy = my_strdup(av[i]);
		para_info[i].word_array = my_str_to_word_array(av[i]);
	}
	para_info[i].str = '\0';
	return para_info;
}
