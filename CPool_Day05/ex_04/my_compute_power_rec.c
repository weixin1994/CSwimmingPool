#include <stdio.h>
int my_compute_power_rec(int nb,int p)
{
	int res = 1;
	if(p == 0)
		res = 1;
	if(p < 0)
		res = 0;
	if(p > 0)
		res = nb * my_compute_power_rec(nb,p-1);
	return res;
}
