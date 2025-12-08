#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 *
 * Description:
 * This function traverses a binary tree in post-order. For each node,
 * the provided function is called with the value stored in the node.
 * Post-order traversal visits the left subtree first, then the right subtree,
 * and finally the root node.
 *
 * If tree or func is NULL, the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
