#include "binary_trees.h"

/**
 * binary_tree_is_root - Examine if a node is a root of a binary tree.
 * @node: pointer to the node to be examined
 * Return: If the node is a root of - 1
 * Or else - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
