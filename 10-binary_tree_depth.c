#include "binary_trees.h"
/**
 * binary_tree_depth -  function that measures the depth of a node
 * in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: NULL or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t parent_depth = binary_tree_depth(tree->parent);

		if (tree && tree->parent)
		{
			return (parent_depth + 1);
		}
		else
		{
			return (0);
		}
	}
}
