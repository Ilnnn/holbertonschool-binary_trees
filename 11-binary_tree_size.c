#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description: Computes the total number of nodes in a binary tree by
 * recursively summing the sizes of the left and right subtrees and adding one
 * for the current node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_size(tree->left) +
            binary_tree_size(tree->right) +
            1);
}