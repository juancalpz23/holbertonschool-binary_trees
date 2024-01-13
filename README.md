# Holbertonschool- C - Binary_Trees

### Table of Contents

- [Description](#description)
- [Files](#files)
- [Features](features)
- [Use](#use)
- [Examples](#examples)
- [Resources](#resources)
- [Credits](#credits)

## Description

This repository contains C programs related to binary trees, including functions for creating, manipulating, and traversing binary trees. It also includes functions to check properties of binary trees, such as whether they are full or perfect, as well as finding the sibling and uncle of a given node.

## Files

- binary_trees.h: Header file containing the structure definition and function prototypes.
- binary_tree_print.c: File containing a function to print binary trees.
- 1-binary_tree_insert_left.c: Function to insert a node as the left child of another node.
- 2-binary_tree_insert_right.c: Function to insert a node as the right child of another node.
- 3-binary_tree_delete.c: Function to delete an entire binary tree.
- 4-binary_tree_is_leaf.c: Function to check if a node is a leaf.
- 5-binary_tree_is_root.c: Function to check if a node is a root.
- 6-binary_tree_preorder.c: Function to traverse a binary tree using pre-order traversal.
- 7-binary_tree_inorder.c: Function to traverse a binary tree using in-order traversal.
- 8-binary_tree_postorder.c: Function to traverse a binary tree using post-order traversal.
- 9-binary_tree_height.c: Function to measure the height of a binary tree.
- 10-binary_tree_depth.c: Function to measure the depth of a node in a binary tree.
- 11-binary_tree_size.c: Function to measure the size of a binary tree.
- 12-binary_tree_leaves.c: Function to count the leaves in a binary tree.
- 13-binary_tree_nodes.c: Function to count the nodes with at least 1 child in a binary tree.
- 14-binary_tree_balance.c: Function to measure the balance factor of a binary tree.
- 15-binary_tree_is_full.c: Function to check if a binary tree is full.
- 16-binary_tree_is_perfect.c: Function to check if a binary tree is perfect.
- 17-binary_tree_sibling.c: Function to find the sibling of a node.
- 18-binary_tree_uncle.c: Function to find the uncle of a node.

## Features

- Creation and manipulation of binary trees.
- Tree traversal using pre-order, in-order, post-order, and level-order methods.
- Checking properties of binary trees, such as fullness and perfection.
- Finding the sibling and uncle of a given node.

## Use

### Installation

Clone the repository:
```shell
https://github.com/juancalpz23/holbertonschool-binary_trees
```

### Usage

Include the binary_trees.h header file in your C program and use the provided functions for working with binary trees.

## Examples
```
juancalpz23@penguin:~/holbertonschool-binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```
```
juancalpz23@penguin:~/holbertonschool-binary_trees$ ./16-perfect 
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
```
## Resources

- *[Binary tree](https://intranet.hbtn.io/rltoken/Fh5nlgv82l1bUbWmdSNwaQ)*
- *[Data Structure and Algorithms - Tree](https://intranet.hbtn.io/rltoken/fmFIIvUSROgY2lUOBy7S5A)*
- *[Tree Traversal](https://intranet.hbtn.io/rltoken/eM-xhVxz4ss4clru2cyVqQ)*
- *[Binary Search Tree](https://intranet.hbtn.io/rltoken/753pOe8BipA5bSJzZCrqeg)*
- *[Data structures: Binary Tree](https://intranet.hbtn.io/rltoken/xTtNtmcL9Z6EmChV67Ce8A)*

## Credits

- *[Juan C Lopez Loyola](https://github.com/juancalpz23)*
- *[Norman Colon](https://github.com/normancolon)*
