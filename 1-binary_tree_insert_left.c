#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that insert a node as the left_child
 * @parent: is a pointer to the node to insert left child in
 * @value: the value to be aadded in the new node
 * Return: it will return abinary_tree_t type
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *the_node;

	if (parent == NULL)
		return (NULL);
	the_node = binary_tree_node(parent, value);
	if (parent->left)
	{
		the_node->left = parent->left;
		parent->left->parent = the_node;
	}
	parent->left = the_node;
	return (the_node);
}
