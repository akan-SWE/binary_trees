#include "binary_trees.h"
#define MAX(x, y) ((x) > (y) ? (x) : (y))

size_t binary_tree_height_helper(const binary_tree_t *tree);

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: A pointer to the root node
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = binary_tree_height_helper(tree);

	return (height - 1); /* exclude root */
}

/**
 * binary_tree_height_helper - A helper function that
 * recusively calculate the height of the tree.
 *
 * @tree: A pointer to the root node
 *
 * Return: The height of the tree
 */
size_t binary_tree_height_helper(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height_helper(tree->left);
	right_height = binary_tree_height_helper(tree->right);
	return (MAX(left_height, right_height) + 1);
}
