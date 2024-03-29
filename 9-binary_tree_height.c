#include "binary_trees.h"

/**
 * _maxi - to find the maximum of two values.
 * @left: first value
 * @right: second value
 * Return: the maximum value of the two
 */

size_t _maxi(size_t left, size_t right)
{
	return ((left > right) ? left : right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, result;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	result = _maxi(left_height, right_height) + 1;

	return (result);
}
