#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * The height of a binary tree is defined as the number of edges
 * on the longest path from the root node to a leaf. If the tree
 * is NULL, the function returns -1. A leaf node has a height of 0.
 *
 * Return: The height of the tree
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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right;
	int height_left;

	if (tree == NULL)
	return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
