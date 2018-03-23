#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"

int my_show_param_array(struct info_param const *par)
{
	int size = 0;
	while(par[size].str != '\0')
		size++;
	for(int i = 0; i < size; i++) 
	{
		my_putstr(par[i].str);
		my_putchar('\n');
		my_put_nbr(par[i].length);
		my_putchar('\n');
		my_show_word_array(par[i].word_array);        
	}
	return 0;
}
