#include <stdio.h>
#include "./include/my.h"
int my_sort_word_array(char **tab)
{
	int len = 0;
	char **str = tab;
	while(*str != 0)
	{
		len++;
		str++;
	}
	for(int i = 0; i < len - 1; i++)
	{
		for(int j = 0; j < len - i - 1; j++)
		{
			if(my_strcmp(*(tab + j), *(tab + j + 1)) > 0)
			{
				char *temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp; 
			}
		}
	}
	return 0;
}
