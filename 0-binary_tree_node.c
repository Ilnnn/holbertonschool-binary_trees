#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of a parent
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description:
 * This function creates a new node and inserts it as the right-child
 * of the given parent. If the parent already has a right-child, the
 * new node takes its place and the old right-child becomes the
 * right-child of the new node.
 *
 * Return:
 * Pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);

}