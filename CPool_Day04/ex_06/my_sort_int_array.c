#include <stdio.h>
#include <stdlib.h>
void my_sort_int_array(int *array,int size)
{
	int temp = 0;
	for(int i = 0;i < size-1;i++)
	{
		for(int j = 0;j < size-1-i;j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}

