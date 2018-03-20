#include <stdio.h>
#include <unistd.h>
int my_putnbr_base(int nbr, char const *base);
int my_strlen(const char *s);
int my_showstr(char const *str)
{
	char conv = '\\';
	int i = 0;
	while (i < my_strlen(str)) 
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1,&str[i],1);
		else
		{
			write(1,&conv,1);
			my_putnbr_base(str[i],"0123456789ABCDEF");
		}
		i++;	
	}
	return 0;
}
