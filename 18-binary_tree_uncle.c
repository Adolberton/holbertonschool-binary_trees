#include "binary_trees.h"

/**
 * binary_tree_uncle - finds 'uncle' to a node, sibling to `node` parent
* @node: node to check
* Return: pointer to sibling node of parent to `node`, or NULL if none found
* or `node` is NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	return (binary_tree_sibling(parent));
}
