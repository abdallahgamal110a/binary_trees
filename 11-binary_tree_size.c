#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t size_left = binary_tree_size(tree->left);
		size_t size_right = binary_tree_size(tree->right);
		size_t size = 0;

		if (tree)
		{
			size += 1;
			size += size_left;
			size += size_right;
		}
		return (size);
	}
}
