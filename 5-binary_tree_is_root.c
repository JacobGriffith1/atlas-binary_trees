#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: Pointer to the node to check.
 * Return: if root 1, else 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node && !(node->parent))
		root = 1;

	return (root);
}
