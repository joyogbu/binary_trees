#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is NULL, otherwise returns depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	depth = -1;
	if (tree == NULL)
		return (0);
	while (tree)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
