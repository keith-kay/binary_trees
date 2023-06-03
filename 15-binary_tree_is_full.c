#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is not full, return 0.
 *         Otherwise, return 1.
 *
 * Description: The function recursively checks if a binary tree is full,
 *              which means that every node in the tree has either 0 or 2 children.
 *              If the tree is not full at any node, the function returns 0.
 *              If the tree is full at all nodes, the function returns 1.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or is not full, return 0.
 *         Otherwise, return 1.
 *
 * Description: The function checks if a binary tree is full by calling the
 *              helper function is_full_recursive. If the tree is NULL or
 *              is not full, the function returns 0. If the tree is full,
 *              the function returns 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
