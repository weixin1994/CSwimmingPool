#include <stdio.h>
#include <stdlib.h>
void my_sort_int_array(int *tab, int size)
{
	int temp = 0;
	for(int i = 0;i < size-1;i++)
	{
		for(int j = 0;j < size-1-i;j++)
		{
			if(tab[j] > tab[j+1])
			{
				temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;
			}
		}
	}
}

