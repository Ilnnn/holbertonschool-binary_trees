#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling of
 *
 * Description: A sibling is the other child of a node's parent.
 * If the node has no parent or no sibling, NULL is returned.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}
