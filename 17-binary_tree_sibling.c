#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: A pointer to the node to find the sibling of
 *
 * Return: The sibling, or NULL if the node has no sibling.
 * On failure, it returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);
	/* If the node is the left child, return the right child, and vice versa */
	parent = node->parent;
	return ((parent->left == node) ? parent->right : parent->left);
}
