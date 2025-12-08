#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description:
 * Recursively frees all nodes of a binary tree.
 * Performs a post-order traversal: left subtree, right subtree, then node.
 * If tree is NULL, the function does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
