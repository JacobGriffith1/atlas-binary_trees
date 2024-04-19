#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: Full ? 1 : 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		if (l == 0 || r == 0)
			return (0);
		return (1);
	}
	return ((!tree->left && !tree->right) ? 1 : 0);
}
