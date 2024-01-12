#include "binary_trees.h"
/**
 * binary_tree_sibling - finds 'sibling' to a node, sharing the same parent
 * @node: node to check
 * Return: pointer to node sharing same parent as `node`, or NULL if none found
 * or `node` is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	sibling = node;

	if (sibling->parent->left != NULL)
		return (sibling->parent->left);
	{
		if (sibling->parent->left != NULL)
			return (sibling->parent->left);
	}

	if (sibling->parent->right != node)
	{
		if (sibling->parent->right != NULL)
			return (sibling->parent->right);
	}

	return (0);
}
