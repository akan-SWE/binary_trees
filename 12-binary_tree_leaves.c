#include "binary_trees.h"


/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The total number of leaves from a node otherwise
 * 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t left_leave_count = 0, right_leave_count = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right) /* current node is a leave node */
		return (1);

	left_leave_count = binary_tree_leaves(tree->left);
	right_leave_count = binary_tree_leaves(tree->right);

	return (left_leave_count + right_leave_count);
}
