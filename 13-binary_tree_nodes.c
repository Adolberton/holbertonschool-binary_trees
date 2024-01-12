#include "binary_trees.h"
/**
 * binary_trees_nodes - counts nodes with less than 1 child
 * @tree: pointer to the root node of the tree to count the number of node
 * Return: 0 if tree = NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
