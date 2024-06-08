#include "binary_trees.h"

/**
 * binary_tree_preorder - Visit each node in the binary tree using the
 * pre-order traversal
 *
 * @tree: A pointer to the root node of the tree
 * @func: A function pointer that handles the printing of each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
