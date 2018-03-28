#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "./include/my.h"

int main(int argc,char *argv[])
{
	int errno;
	int fd;
	int rc = 0; 
	char buffer[30] = {};
	
	if(argc == 1)
	{
		while(rc = read(0,buffer,30))
			write(1,buffer,rc);	
	}
	rc = 0;
	for(int i = 1;i < argc;i++)
	{
		fd = open(argv[i],O_RDONLY);
		if (3 == fd)
		{
			
			while((rc = read(fd,buffer,30)))
			{
				if(errno == 21)
				{
					my_putstr("my_cat: ");
					my_putstr(argv[i]);
					my_putstr(": ");
					my_putstr("Is a directory\n");
					break;
				}
				write(1,buffer,rc);
			}	
			close(fd);
		}
		else
		{
			my_putstr("An error has occurred while opening ");
			my_putstr(argv[i]);
			my_putstr(".");
			my_putstr("\n");
		}
	}
	return 0;
}
