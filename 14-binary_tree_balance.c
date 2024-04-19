#include "binary_trees.h"

/**
 * height_checker - Measures the height of a binary tree for use in the
 * binary_tree_balance function.
 * @tree: The tree
 * Return: Height
 */

size_t height_checker(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		l = tree->left ? 1 + height_checker(tree->left) : 1;
		r = tree->right ? 1 + height_checker(tree->right) : 1;
	}
	return ((l > r) ? l : r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * Return: Balanced factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0, total = 0;

	if (tree)
	{
		l = ((int)height_checker(tree->left));
		r = ((int)height_checker(tree->right));
		total = l - r;
	}
	return (total);
}
