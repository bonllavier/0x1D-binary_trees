#include "binary_trees.h"
/**
 *binary_tree_depth - depth
 *@tree: tree.
 *Return: nothing.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		height = binary_tree_depth(tree->parent) + 1;
		return (height);
	}
}
