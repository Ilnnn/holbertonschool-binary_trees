#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
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
