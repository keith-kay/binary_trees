#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0. Otherwise, return the balance factor.
 *
 * Description: The function calculates the balance factor of a binary tree by
 *              subtracting the height of the right subtree from the height of
 *              the left subtree. It calls the helper function binary_tree_height
 *              to calculate the heights of the left and right subtrees.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0. Otherwise, return the height.
 *
 * Description: The function recursively calculates the height of a binary tree
 *              by finding the maximum height between the left and right subtrees.
 *              If the tree is NULL, it returns 0. Otherwise, it returns the maximum
 *              height between the left and right subtrees plus 1 (for the root node).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
