#include <stdio.h>
#include "my_str.h"
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
	//printf("%d,%d,%d,%d",count_plus,count_minus,count_num,i);
	char array[count_num-1];
	int count = 0;
	count = count_num - 1;
	int k = count;
	while(j <= i)
	{
		if(str[j] >= '0' && str[j] <= '9')
		{
			array[count] = str[j];
			count--;
		}
		j++;
	}
	array[count_num] = '\0'; 
	printf("%s",array);
	char *array2 = my_evil_str(array);
	printf("%s",array2);
		
	int s = 0;
	int m = 1;
	int x = 0;
	i = 0;
	while(i <= k)
	{	
		x = array2[k] - '0';
		s = s + x * m;
		m = m * 10;
		k--;
	}
	if(count_minus % 2 == 1)
		s = s * -1;
	printf("s=%d",s);
	return s;
}

int main()
{
	char *str = "+++-----+--4233++3+--";
	my_getnbr(str);
	return 0;
}
