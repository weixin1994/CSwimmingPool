#include <stdio.h>
#include "./include/my.h"
int	lencmp_isstar(char const *s1, char const *s2)
{
	int	i = 0;
	int	j = 0;
	while(s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
    {
		if(s2[j] == '*')
			return 2;
		j++;
    }
	if(i == j)
		return 2;
	else
		return 0;
}

int	match(char const *s1, char const *s2)
{
	int i = 0;
	int	j = 0;
	if(lencmp_isstar(s1, s2) == 0)
		return 0;
	if(s2[0] == '*')
		j++;
	while (s1[i] != '\0')
    {
		while(s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
		{
			i++;
			j++;
			if(s2[j] == '*')
				j++;
		}
		i++;
    }
	if((s1[i] == '\0' && s2[j] == '\0' && s2[j - 1] == '*') || (s1[i] == '\0' && s2[j] == '\0' && s1[i - 1] == s2[j - 1]))
		return 1;
	else
		return 0;
}
