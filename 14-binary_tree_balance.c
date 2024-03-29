#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, result;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	result = left_height - right_height;
	return (result);
}
