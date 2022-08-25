#include "binary_trees.h"
/**
 * binary_tree_inorder - an inoder tree traversal
 * @tree: the tree
 * @func: the functrion to print the nodes
 * Return: returns a void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
		func(tree->n);
	binary_tree_inorder(tree->right, func);
}
