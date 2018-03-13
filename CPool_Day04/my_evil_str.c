#include <stdio.h>
#include <unistd.h>
int my_strlen(char const *str)
{
	int len=0;
	while((*str++)!='\0')
	len++;
	return len;
}

char *my_evil_str(char *str)
{
	char temp;
	int i = 0;
	int len = my_strlen(str);
	while(i < len/2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return str;
}

