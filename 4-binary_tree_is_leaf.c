#include "binary_trees.h"
/**
 * binary_tree_is_leaf - to check if a node is a leaf
 * @node: this is the head node pointer
 * Return: returns an int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	else
	{
		return (0);
	}
}

