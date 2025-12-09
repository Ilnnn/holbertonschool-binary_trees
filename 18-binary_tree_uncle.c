#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL)
	return (NULL);

	parent = node->parent;

	if (parent == NULL)
	{
		return (NULL);
	}

	grandparent = parent->parent;

	if (grandparent == NULL)
	{
		return (NULL);
	}

	if (parent == grandparent->left)
	{
		return (grandparent->right);
	}

	else
	{
		return (grandparent->left);
	}
}