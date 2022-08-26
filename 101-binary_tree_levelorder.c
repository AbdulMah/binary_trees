#include "binary_trees.h"
/**
 * linked_node_extension - this function makes a linked list from depth level and node
 * @head: pointer to head of linked list
 * @tree: node to store
 * @level: depth of node to store
 * Return: Nothing
 */
void linked_node_extension(link_t **head, const binary_tree_t *tree, size_t level)
{
	link_t *new;
	link_t *aux;

	new = malloc(sizeof(link_t));
	if (new == NULL){ return; }

	new->n = level;
	new->node = tree;
	
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		new->next = NULL;
		aux->next = new;
	}
}
/**
 * levelorder_extension - goes through the complete tree and each stores each node
 * in linked_node function
 * @head: pointer to head of linked list
 * @tree: node to check
 * Return: Nothing by default it affects the pointer
 */
void levelorder_extension(link_t **head, const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree != NULL)
	{
		level = binary_tree_depth(tree);
		linked_node_extension(head, tree, level);
		levelorder_extension(head, tree->left);
		levelorder_extension(head, tree->right);
	}
}
/**
 * binary_tree_levelorder - display the tree using level order traversal
 * @tree: pointer to the root node of tree traverse
 * @func: pointer to a function to call for each node, value node must be passedas a parameter to this function
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	link_t *head, *aux;
	size_t height = 0, count = 0;

	if (!tree || !func)
	{
		return;
	}
	else
	{
		height = binary_tree_height(tree);
		head = NULL;
		levelorder_extension(&head, tree);
		while (count <= height)
		{
			aux = head;
			while (aux != NULL)
			{
				if (count == aux->n)
				{
					func(aux->node->n);
				}
				aux = aux->next;
			}
			count++;
		}
		while (head != NULL)
		{
			aux = head;
			head = head->next;
			free(aux);
		}
	}
}
