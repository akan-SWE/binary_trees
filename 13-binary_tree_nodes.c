#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: A pointer to the root node of tree
 *
 *
 * Return: The number of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (!tree)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	/* A node is an inner node if it not a leaf node */
	return (!binary_tree_is_leaf(tree) + left_count + right_count);
}
