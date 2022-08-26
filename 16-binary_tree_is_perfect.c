#include "binary_trees.h"
/**
 * tree_extension - function that checks, extension of binary_tree_is_perfect
 * @tree: pointer to the tree to check
 * Return:  If tree is NULL, return 0
 */
int tree_extension(const binary_tree_t *tree)
{
	int value_a = 0;
	int value_b = 0;

	if (tree->left && tree->right)
	{
		value_a = 1 + tree_extension(tree->right);
		value_b = 1 + tree_extension(tree->left);
		
		if (value_a == l && value_a != 0 && value_b != 0)
			return (value_a);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_extension(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
