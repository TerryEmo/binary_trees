#include "binary_trees.h"

/**
 * binary_tree_insert_left - Enter a node on the left child of
 * another in a binary tree
 * @parent: Pointer to the node inserted to the left child in
 * @value: Value to store in the new node
 * Return: If parent is NULL or gives an error occurs - NULL
 * Otherwise - Pointer to the new node
 * Description: If note parent already has a left child, a new node
 * takes it's place and the old left child is set to be
 * the left child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
