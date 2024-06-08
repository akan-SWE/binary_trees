#include "binary_trees.h"

/**
 * binary_tree_postorder - Visit each node in the binary tree using the
 * postorder traversal
 *
 * @tree: A pointer to the root node of the tree
 * @func: A function pointer that handles the printing of each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
