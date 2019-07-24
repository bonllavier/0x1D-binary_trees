#include "binary_trees.h"
/**
 *binary_tree_insert_left - insert left
 *@parent: head
 *@value: string.
 *Return: new pointer.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		parent->left = node;
	}
	else
	{
		node->n = value;
		node->parent = parent;
		node->left = parent->left;
		node->right = NULL;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
