#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of a parent node
* @parent: Pointer to the parent node
* @value: Value to store in the new node
*
* Description: If the parent already has a left child, the new node takes its
* place and the old left child becomes the left child of the new node.
*
* Return: Pointer to the newly created node, or NULL on failure or if parent
* is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
	{
		return (NULL);
	}
	new_left->n = value;
	new_left->left = NULL;
	new_left->right = NULL;
	new_left->parent = parent;
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;

	return (new_left);

}
