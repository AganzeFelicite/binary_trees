#include "binary_trees.h"
/**
 * binary_tree_height - to measure the height of a binary tree
 * @tree: this is the binary tree /it a pointer to it
 * Return: returns a size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	ssize_t height__l = 0;
	ssize_t height__r = 0;

	if (!tree)
		return (0);
	height__l = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	height__r = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
	return ((height__l > height__r ? height__l : height__r));
}
