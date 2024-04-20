#include "binary_trees.h"

/**
 * perfect - Auxilary for binary_tree_is_perfect
 * @tree: Tree
 * Return: Height
 */

int perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + perfect(tree->left);
		r = 1 + perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfectly balanced
 * @tree: Tree
 * Return: Perfect ? 1 : 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int p = 0;

	if (!tree)
		return (0);

	p = perfect(tree);
	if (p != 0)
		return (1);
	return (0);
}
