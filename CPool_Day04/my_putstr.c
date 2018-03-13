#include <stdio.h>
#include <unistd.h>
int my_strlen(char const *str)
{
	int len=0;
	while((*str++)!='\0')
	len++;
	return len;
}

int my_putstr(char const *str)
{
	return write(1,str,my_strlen(str));
		
}
