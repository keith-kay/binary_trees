#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, the function returns 0. Otherwise, it returns the depth.
 *
 * Description: The depth of a node in a binary tree is the number of edges from the
 *              root node to the given node. The function recursively calculates the
 *              depth by checking if the current node and its parent are valid, and
 *              incrementing the depth by 1 while traversing up the parent chain.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
