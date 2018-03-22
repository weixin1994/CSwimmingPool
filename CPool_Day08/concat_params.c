#include <stdio.h>
#include <stdlib.h>
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
	char *dest;
	char *temp;
	char div[] = "\n";
	int i;
	int len = 0;
	for(i = 0; i < argc; i++)
		len = len + my_strlen(argv[i] + 1);
	dest = malloc(sizeof(char) * len);
	for(i = 0; i < argc; i++) 
	{
		dest = my_strcat(dest, argv[i]);
		temp = malloc(my_strlen(argv[i]) + 2);
		my_strcpy(temp, argv[i]);
		if(i < argc - 1)
			dest = my_strcat(dest, my_strcat(temp, div));
		else
			dest = my_strcat(dest, my_strcat(temp, "\0"));	
	}
	dest = my_strcat(dest, "\0");
	return dest;
}
