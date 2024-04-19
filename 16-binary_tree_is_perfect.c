#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: Perfect ? 1 : 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		l = 1 + binary_tree_is_perfect(tree->left);
		r = 1 + binary_tree_is_perfect(tree->right);
		if (l == r && l != 0 && r != 0)
			return (1);
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
