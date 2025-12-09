#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein
 * @tree: Pointeur vers la racine de l'arbre à vérifier
 *
 * Description:
 * Un arbre binaire est considéré comme plein lorsqu’aucun nœud
 * ne possède un seul enfant : chaque nœud doit avoir soit 0,
 * soit 2 enfants. La fonction utilise une récursion pour vérifier
 * cette propriété sur l’ensemble de l’arbre.
 *
 * Return: 1 si l'arbre est plein, 0 sinon ou si tree est NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
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
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
