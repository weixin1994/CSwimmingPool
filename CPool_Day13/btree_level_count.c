#include <stdio.h>
#include <stdlib.h>
#include "./include/btree.h"

size_t btree_level_count(btree_t const *root)
{
	int	letf_height;
	int	right_height;

	if(root == NULL)
		return 0;
	else
	{
		letf_height = btree_level_count(root->left);
		right_height = btree_level_count(root->right);
		if(letf_height > right_height)
			return (letf_height + 1);
		else
			return (right_height + 1);
	}
}
