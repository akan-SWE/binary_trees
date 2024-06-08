#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf
 *
 * @node: Reference to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0 if node is not or node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node != (node && node->left != node->right))
		return (0);
	else
		return (1);
}
