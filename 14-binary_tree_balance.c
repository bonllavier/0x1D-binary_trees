#include "binary_trees.h"
/**
 *binary_tree_depth - depth
 *@tree: tree.
 *Return: nothing.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int ladol = 0;
	int lador = 0;
	if (tree == NULL)
	{
		return (0);
	}
	ladol = height_2(tree->left);
	lador = height_2(tree->right);
	printf("%d ladol\n", ladol);
	printf("%d lador\n", lador);
	return (ladol - lador);
}

int height_2(const binary_tree_t *tree)
{
        int heightl = 0;
        int heightr = 0;
        int height = 0;

        if (tree == NULL)
        {
                return (0);
        }
        else
        {
                heightl = height_2(tree->left);
                heightr = height_2(tree->right);
                if (heightl > heightr)
                {
                        return (heightl + 1);
                }
                else if (tree->left != NULL || tree->right != NULL)
                {
                        return (heightr + 1);
		}
                else
                {
                        return (height);
                }
        }
}
