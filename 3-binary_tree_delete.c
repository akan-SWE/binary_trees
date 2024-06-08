#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Reference to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree) {
  /* base case */
  if (tree == NULL)
    return;

  /* recursive call */
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  free(tree); /* delete each node on return */
}
