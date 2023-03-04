#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count it's leaves
 * Return: 0 if tree is NULL, otherwise return number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number, left_number, right_number;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_number = binary_tree_leaves(tree->left);
	right_number = binary_tree_leaves(tree->right);
	number = left_number + right_number;
	return (number);
}
