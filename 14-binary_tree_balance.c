#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that measures the balance factor of binary tree
 * @tree: a pointer to the node of the tree to measure the size
 * If tree is NULL, return 0
 * Return: number of children node
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t value_b = 0;
	size_t value_a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			value_b = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			value_a = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		//if (value_b > value_a) { return value_b; }
		//else { return value_a; }
		return ((value_b > value_a) ? value_b : value_a);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
