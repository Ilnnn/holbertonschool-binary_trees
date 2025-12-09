#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root of the tree to check
 *
 * Description:
 * A binary tree is considered full when no node
 * has only one child: each node must have either 0
 * or 2 children. The function uses recursion to verify
 * this property throughout the entire tree.
 *
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
