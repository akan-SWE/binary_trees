
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child of another node
 * If the parent already has a right child, the new child will take it place
 * and then it reference to the old child as it own child.
 *
 *
 * @parent: Reference to the parent
 * @value: The data of the new child
 *
 * Return: The new child otherwise NULL on failure which includes the case
 * where parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;
	/* Can't insert right child since it has no parent */
	if (!parent)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	/* fail to create the right child */
	if (!right_child)
		return (NULL);

	/* Assign the right child to the parent */
	right_child->right = parent->right;

	if (right_child->right)
		right_child->right->parent = right_child;

	parent->right = right_child;
	return (right_child);
}
