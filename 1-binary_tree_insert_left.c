#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: pointer to the nee0wly created node, otherwise
 * return NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *current;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	if (parent == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	current = parent;
	while (1)
	{
		parent = current;
		if (value < current->n)
		{
			current = current->left;
			if (parent->left != NULL)
			{
				newnode->left = parent->left;
				newnode->left->parent = newnode;
			}
			parent->left = newnode;
		}
		return (newnode);
	}
	return (NULL);
}
