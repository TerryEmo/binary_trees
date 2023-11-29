#include "binary_trees.h"

/**
 * binary_tree_sibling - Locates the relationship of a node in a binary tree
 * @node: A pointer to the node to locate the relationship of
 * Return: If node is NULL or there is no relationship - NULL
 * Or else - a pointer to the relationship
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
