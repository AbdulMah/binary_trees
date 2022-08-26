#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that measures the size of a binary tree
 * @tree: a pointer to the node of the tree to measure the size
 * If tree is NULL, return 0
 * Return: the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t value_b = 0;
	size_t value_a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		value_a = binary_tree_leaves(tree->right);
		value_b = binary_tree_leaves(tree->left);
		leaf = value_b + value_a;
		return ((!value_b && !value_a) ? leaf + 1 : leaf + 0);
	}
}
