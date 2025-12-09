#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth of
 *
 * Description:
 * The depth is the number of edges from the node to the root.
 * The root node has a depth of 0. If the given node is NULL,
 * the function returns 0.
 *
 * Return: The depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current;

	if (tree == NULL)
	return (0);

	current = tree;

	while (current->parent != NULL)
	{
		current = current->parent;
		depth++;
	}

	return (depth);
}
