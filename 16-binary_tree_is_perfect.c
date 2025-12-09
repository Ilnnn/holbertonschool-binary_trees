#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * This function computes the height of a binary tree. The height is
 * defined as the number of edges on the longest path from the node
 * to a leaf. If the tree is NULL, the function returns -1. A leaf
 * node is considered to have a height of 0.
 *
 * Return: The height of the binary tree, or -1 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
	{
		return (-1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Description:
 * A binary tree is perfect if all its leaves are at the same level
 * and every internal node has exactly two children. Returns 0 if
 * the tree is NULL.
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

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

	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);

	if (height_left != height_right)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
