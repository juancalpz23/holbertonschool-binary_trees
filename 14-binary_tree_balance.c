#include "binary_trees.h"
/**
 * tree_height - Measures the height of the binary tree
 * @tree: Pointer to the root of the tree
 * Return: Height of binary tree, if NULL return (0)
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (left_height - right_height);
}
