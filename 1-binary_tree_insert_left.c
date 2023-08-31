#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node.
 * @parent:  a pointer to the node to insert the left-child in.
 * @value: a pointer to the node to insert the left-child in.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		if (!parent)
			return (NULL);

		binary_tree_t *new_node = binary_tree_node(parent, value);
		if (!new_node)
			return (NULL);

		binary_tree_t *old_left = parent->left;
		if (old_left)
		{
			old_left->parent = new_node;
			new_node->left = old_left;
		}

		parent->left = new_node;

		return (new_node);
}
