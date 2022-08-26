#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 * @tree: a pointer to the node of the tree to measure the depth
 * If tree is NULL, return 0
 * Return: size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
