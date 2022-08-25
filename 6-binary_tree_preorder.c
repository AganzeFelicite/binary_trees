#include "binary_trees.h"
/**
 * binary_tree_preorder  - to traverase thre tree in a preoder order
 * @tree: the pointer to the root of the tree to traverse
 * @func: function pointer to print each node
 * Return: it a void function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
