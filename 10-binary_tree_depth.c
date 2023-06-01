#include "binary_trees.h"

/**
 * binary_tree_depth - Measures binary tree depth
 *
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
