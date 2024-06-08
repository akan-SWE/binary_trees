#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node otherwise 0 when tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *tree_copy;

	if (!tree)
		return (0);

	depth = 0;
	tree_copy = (binary_tree_t *)tree;

	while (tree_copy->parent)
	{
		depth++;
		tree_copy =  tree_copy->parent;
	}
	return (depth);
}
