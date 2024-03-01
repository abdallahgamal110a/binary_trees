#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: Number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_leave = binary_tree_leaves(tree->left);
		size_t right_leave = binary_tree_leaves(tree->right);
		size_t leaves = 0;

		if (tree)
		{
			leaves += (!tree->left && !tree->right) ? 1 : 0;
			leaves += left_leave;
			leaves += right_leave;
		}
		return (leaves);
	}
}
