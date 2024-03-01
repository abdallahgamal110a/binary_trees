#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: NULL or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);
		size_t l = 0, r = 0;

		l = tree->left ? 1 + left_height : 0;
		r = tree->right ? 1 + right_height : 0;
		return ((l > r) ? l : r);
	}
}
