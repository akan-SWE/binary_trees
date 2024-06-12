#include "binary_trees.h"

/**
 * binary_tree_depth_if_perfect - Helper function to check if a tree is perfect
 * and return the depth if it is.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Depth of the tree if it is perfect, otherwise 0.
 */
size_t binary_tree_depth_if_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Node has 2 children */
	if (tree->left && tree->right)
	{
		size_t left_depth = binary_tree_depth_if_perfect(tree->left);
		size_t right_depth = binary_tree_depth_if_perfect(tree->right);

	/* Both subtrees must be perfect and of the same depth */
		if (left_depth == right_depth)
			return (1 + left_depth);

		return (0);
	}

	/* Node has no children */
	if (!tree->left && !tree->right)
		return (1);

	/* Node has one child */
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((binary_tree_depth_if_perfect(tree) > 0) ? 1 : 0);
}
