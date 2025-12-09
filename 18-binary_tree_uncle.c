#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle for
 *
 * Description:
 * This function returns the uncle of a given node. The uncle of a node
 * is defined as the sibling of its parent. If the node is NULL, has no
 * parent, or the parent has no parent (i.e., no grandparent), the
 * function returns NULL.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists.
 */

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
