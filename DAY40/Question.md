# Day 40: Questions

## Question 118: Post Order Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the post order traversal of its nodes' values.

**Post Order Traversal:** Recursively visit the left subtree, then visit the right subtree, and finally visit the root node.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: [9, 15, 7, 20, 3]
Explanation:
Post order traversal visits nodes in the order: 9 -> 15, 7 -> 20 -> 3.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [1]
Explanation: The tree has only one node, so the traversal returns a list with that single node.

## Question 119: Height of Binary Tree

**Problem:**  
Given the root of a binary tree, return the height of the tree.

**Height of Tree:** The height of a binary tree is the number of edges on the longest path from the root to a leaf node.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: 3
Explanation:
The height of the tree is 3, as the longest path from the root to a leaf node is 3 -> 20 -> 15.

Example 2:

Input: root = []
Output: 0
Explanation: The tree is empty, so the height is 0.

Example 3:

Input: root = [1]
Output: 1
Explanation: The tree has only one node, so the height is 1.

## Question 120: Inorder Traversal of Binary Tree (iterative)

**Problem:**  
Given the root of a binary tree, return the inorder traversal of its nodes' values.

**Inorder Traversal:** Recursively visit the left subtree, then visit the root node, and finally visit the right subtree.

Examples
Example 1:

Input: root = [1, null, 2, 3]
Output: [1, 3, 2]
Explanation:
Inorder traversal visits nodes in the order: 1 -> 3 -> 2.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [1]
Explanation: The tree has only one node, so the traversal returns a list with that single node.
