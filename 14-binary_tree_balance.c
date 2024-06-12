#include "binary_trees.h"

/**
 * get_tree_height - Get the height of binary tree
 *
 * @tree: A pointer to the root node
 *
 * Return: The height of the tree
 */
size_t get_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = get_tree_height(tree->left);
	right_height = get_tree_height(tree->right);
	return (MAX(left_height, right_height) + 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a
 * binary tree.
 *
 * @tree: A pointer to the root node
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_of_left_subtree, height_of_right_subtree;
	int balance_factor;

	if (!tree)
		return (0);

	height_of_left_subtree = get_tree_height(tree->left);
	height_of_right_subtree = get_tree_height(tree->right);

	balance_factor = height_of_left_subtree - height_of_right_subtree;
	return (balance_factor);
}
