#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree = NULL or 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes = 0, height = 0, perfect = 0;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree);
	height = binary_tree_height(tree);
	perfect = _pow_recursion(2, height + 1) - 1;
	if (nodes == perfect)
		return (1);
	return (0);
}
