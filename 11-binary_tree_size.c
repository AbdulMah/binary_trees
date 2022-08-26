#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: a pointer to the node of the tree to measure the size
 * If tree is NULL, return 0
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;
	if (!tree)
	{	
		return (0);
	}
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}