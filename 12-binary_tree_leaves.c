#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that measures the size of a binary tree
 * @tree: a pointer to the node of the tree to measure the size
 * If tree is NULL, return 0
 * Return: the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
