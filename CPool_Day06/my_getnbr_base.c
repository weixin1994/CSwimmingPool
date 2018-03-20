#include <stdio.h>
int my_strlen(const char *s);
char *my_revstr(char *str);
int my_compute_power_it(int nb,int p);
int	my_getnbr_base(char *str, char *base)
{
	int a = 0;
	int b = 0;
	int count_num = 0;
	int count = 0;
	int len = my_strlen(str);
	while(a < len)
	{
		if(str[a] >= '0' && str[a] <= '9')
			count_num++;	
		a++;	
	}
	char array[count_num-1];
	count = count_num - 1;
	while(b <= a)
	{
		if(str[b] >= '0' && str[b] <= '9')
		{
			array[count] = str[b];
			count--;
		}
		b++;
	}
	array[count_num] = '\0'; 
	char *digit_str = my_revstr(array);
	int	i,j,result;
	i = my_strlen(digit_str) - 1;
	result = 0;
	j = 0;	
	while(i >= 0)
    {
		result = result + my_compute_power_it(my_strlen(base), j) * (digit_str[i] - '0') ;
		j++;
		i--;	
    }  
    int minus_count = 0;
    int k = 0;
    while(k <= my_strlen(str))
    {
		if(str[k] == '-')
			minus_count++;
		k++;
	}
	if(minus_count % 2 != 0)
		result = result * -1;
    return result;
}
