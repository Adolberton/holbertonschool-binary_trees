#include "binary_trees.h"

/**
 * binary_tree_uncle - finds 'uncle' to a node, sibling to `node` parent
 * @node: node to check
 * Return: pointer to sibling node of parent to `node`, or NULL if none found
 * or `node` is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
