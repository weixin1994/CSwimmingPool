#include <stdio.h>
#include "../include/my.h"
int do_op(char *num1, char *op, char *num2)
{
	int res;
	if(num1 != NULL && num2 != NULL)
	{
		int n1 = my_getnbr(num1);
		int n2 = my_getnbr(num2);
				
		if(*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
			my_putstr("0\n");	
		if(*op == '+')
			res = n1 + n2;
		if(*op == '-')
			res = n1 - n2;
		if(*op == '*')
			res = n1 * n2;
		if(*op == '/')
		{
			if(n2 != 0)
				res = n1 / n2;
			else
				my_putstr("Stop: division by zero\n");	
		}	
		if(*op == '%')
		{
			if(n2 != 0)
				res = n1 % n2;
			else
				my_putstr("Stop: modulo by zero\n");		
		}
	}	
		return res;
}

int main(int argc, char *argv[])
{
	char op = argv[2][0];
	int num2 = my_getnbr(argv[3]);
	if(argc == 4)
	{
		if(do_op(argv[1],argv[2],argv[3]) != 0)
		{
			my_put_nbr(do_op(argv[1],argv[2],argv[3]));
			my_putstr("\n");
			return 0;
		}
		if(op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
			return 84;
		if((op == '/' || op == '%') && num2 == '0')
			return 84;
	}
	else
		return 84;
}
