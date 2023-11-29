#include "binary_trees.h"

/**
 * binary_tree_postorder - transit a binary tree by using post-order traversal
 * @tree: The pointer to the root of the node to the tree to traverse
 * @func: Pointer to a working call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
