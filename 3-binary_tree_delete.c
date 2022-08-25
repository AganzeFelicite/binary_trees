#include "binary_trees.h"
/**
 * binary_tree_delete - a function to delete a tree
 * @tree: the is a ponter root node of the tree
 * Return: returns a void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete((*tree).left);
	binary_tree_delete((*tree).right);
	free(tree);
}
