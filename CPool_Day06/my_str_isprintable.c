#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

int my_str_isprintable(char const *str)
{
	int flag = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			flag = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < 32 || str[i] > 126) 
			{ 
				flag = 0;
				break;
			}
			else
				flag = 1;
			i++;
		}
	}	
	return flag;
}


