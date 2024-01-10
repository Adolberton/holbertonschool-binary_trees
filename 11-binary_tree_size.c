#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size + 1);
}
