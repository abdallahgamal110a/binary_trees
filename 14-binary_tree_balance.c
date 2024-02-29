#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: NULL or Zero
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: NULL or Zero
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_tree = 0, right_tree = 0;

		left_tree = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_tree = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_tree > right_tree) ? left_tree : right_tree);
	}
	return (0);
}
