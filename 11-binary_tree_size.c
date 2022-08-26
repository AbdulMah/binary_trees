#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: a pointer to the node of the tree to measure the size
 * If tree is NULL, return 0
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, value_a = 0, value_b = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		value_b = binary_tree_size(tree->left);
		value_a = binary_tree_size(tree->right);
		size = value_a + value_b + 1;
	}
	return (size);
}
