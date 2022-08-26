#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree using in-order traversal
 * @tree: a pointer to the root of node of the tree to traverse
 * @func: a pointer to a function tto call each node
 * if tree or func is NULL, do nothing
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}