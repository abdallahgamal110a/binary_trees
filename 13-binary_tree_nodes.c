#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree:a pointer to the root node of the tree to count the number of nodes
 * Return: Node or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	size_t left_node = binary_tree_nodes(tree->left);
	size_t right_node = binary_tree_nodes(tree->left);
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += left_node;
		nodes += right_node;
	}
	return (nodes);
	}
}
