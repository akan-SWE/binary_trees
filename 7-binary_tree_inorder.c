#include "binary_trees.h"

/**
 * binary_tree_inorder - Visit each node in the binary tree using the
 * inorder traversal
 *
 * @tree: A pointer to the root node of the tree
 * @func: A function pointer that handles the printing of each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
