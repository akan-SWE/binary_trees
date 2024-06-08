#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 *
 * @node: Reference to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0 if node is not or node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || (node && node->parent))
		return (0);
	else
		return (1);
	return (0);
}
