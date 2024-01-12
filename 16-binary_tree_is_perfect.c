#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    size_t left_height = tree_height(tree->left);
    size_t right_height = tree_height(tree->right);
    return (left_height > right_height ? left_height : right_height) + 1;
}

int binary_tree_is_full(const binary_tree_t *tree) {
    if (tree == NULL)
        return 1;
    if (tree->left == NULL && tree->right == NULL)
        return 1;
    if (tree->left != NULL && tree->right != NULL)
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    return 0;
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    size_t left_height = tree_height(tree->left);
    size_t right_height = tree_height(tree->right);

    if (left_height == right_height && binary_tree_is_full(tree))
        return 1;
    return 0;
}