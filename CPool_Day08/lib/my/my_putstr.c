#include <stdio.h>
#include <unistd.h>
int my_strlen(char const *str);
int my_putstr(char const *str)
{
	return write(1,str,my_strlen(str));	
}
