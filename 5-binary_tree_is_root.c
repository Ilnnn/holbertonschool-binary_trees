#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root node
 * @node: Pointer to the node to check
 *
 * Return:
 * 1 if the node is a root (its parent is NULL),
 * 0 if the node is NULL or not a root.
 *
 * Description:
 * A node is considered root when it has no parent.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
