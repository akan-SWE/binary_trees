#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: A pointer to the node to find the uncle of
 *
 * Return: The uncle, or NULL if the node has no uncle.
 * On failure, it returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (!node || !node->parent)
		return (NULL);

	grand_parent = node->parent->parent;
	if (!grand_parent)
		return (NULL);
	else if (grand_parent->left == node->parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
