#include "binary_trees.h"
/**
 * binary_tree_is_root - to check  if its a root node
 * @node: is the pointer to the node to be checked
 * Return: this returns an int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || (*node).parent) ? 0 : 1);
}
