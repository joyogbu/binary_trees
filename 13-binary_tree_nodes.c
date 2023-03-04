#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the
 * Return: 0 if tree is NULL, otherwise return the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right !=  NULL) || (tree->left != NULL && tree->right != NULL))
	{
		n++;
	}
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);
	return (n);
}
