#include "binary_trees.h"
/**
 * binary_tree_postorder - this is to traverse it inpostorder maner
 * @tree: this is a pointer to the root node
 * @func: is a simple function to print each node
 * Return: it a void function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
