#include <stdio.h>
#include "my_str.h"
int my_getnbr(char const *str)
{
	int len = my_strlen(str);
	int i = 0;
	int j = 0;
	int count_plus = 0;
	int count_minus = 0;
	int count_num = 0;
	int flag_isnum = 0;
	while(i < len)
	{
		if(str[i] == '+')
			count_plus++;
		if(str[i] == '-')
			count_minus++;
		if(str[i] >= '0' && str[i] <= '9')
		{
			count_num++;
			if(str[i+1] < '0' || str[i+1] > '9')
				flag_isnum = 1;
		}
		i++;
		if(flag_isnum == 1)
			break;
	}
	char array[count_num];
	int k = count_num;
	while(j <= i)
	{
		if(str[j] >= '0' && str[j] <= '9')
		{
			array[count_num] = str[j];
			count_num--;
		}
		j++;
	}
	
	while(k > 0)
	{
		printf("%c",array[k]);
		k--;
	}
	return 0;
}

int main()
{
	char *str = "+++----+--423++3+--";
	my_getnbr(str);
	return 0;
}
