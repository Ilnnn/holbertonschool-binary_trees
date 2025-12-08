#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Description:
 * This function checks if a given node in a binary tree is a leaf.
 * A node is considered a leaf if it has no children (both left and right are NULL).
 *
 * Return:
 * 1 if the node is a leaf, 0 otherwise.
 * If node is NULL, the function returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->left == NULL && node->right == NULL)
	return (1);

	else 
	return (0);
}
