#include <stdio.h>
#include <stlib.h>
int my_strlen(char const *str)
{
	int len=0;
	while((*str++)!='\0')
	len++;
	return len;
}

int my_getnbr(char const *str)
{
	int i = 0;
	int flag_plus = 0;
	int flag_minus = 0;
	while(i < my_strlen(str))
	{
		if(str[i] == '+')
			flag_plus++;
		if(str[i] == '')
			flag_minus++;
		i++;
	}
	return 0;
}
