#include <stdio.h>
int my_is_prime(int nb);
int my_find_prime_sup(int nb)
{
	int i = nb;
	while(my_is_prime(i) != 1)
		i++;
	return i;
}

