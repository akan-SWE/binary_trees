#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left child of another node
 * If the parent already has a left child, the new child will take it place
 * and then it reference to the old child as it own child.
 *
 *
 * @parent: Reference to the parent
 * @value: The data of the new child
 *
 * Return: The new child otherwise NULL on failure which includes the case
 * where parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Can't insert left child since it has no parent */
	if (!parent)
		return (NULL);

	binary_tree_t *left_child = binary_tree_node(parent, value);
	/* fail to create the left child */
	if (!left_child)
		return (NULL);

	/* Assign the left child to the parent */
	left_child->left = parent->left;
	parent->left = left_child;
	return (left_child);
}
