#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: A pointer to the root node of the binary tree
 *
 * Return: 1 if the binary tree is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* tree is NULL */
	if (!tree)
		return (0);

	/* If the node has no children, it's a leaf node and thus full */
	if (!tree->left && !tree->right)
		return (1);

	/* If the node has both left and right children, check subtrees */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	/* If the node has only one child, it's not full */
	return (0);
}
