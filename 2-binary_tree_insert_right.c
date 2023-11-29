#include "binary_trees.h"

/**
 * binary_tree_insert_right - Enter a node as a right child
 * of another in a binary tree
 * @parent: pointer to the node to enter on the right child
 * @value: Value to save in the new node
 * Return: If parent is NULL and error occurs - NULL
 * Or else - a pointer to the new node
 * Description: If parent already has a right child, the new node
 * takes the place and the old right child is set as
 * to the right child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
