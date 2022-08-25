#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: this is a pointer to  the parent node to be created
 * @value: of the curent node created
 * Return: it returns a binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	(*node).parent = parent;
	(*node).n = value;
	(*node).left = NULL;
	(*node).right = NULL;

	return (node);
}
