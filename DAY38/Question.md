# Day 34: Questions

## Question 112: Inorder Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the inorder traversal of its nodes' values.

**Inorder Traversal:** Recursively visit the left subtree, visit the root node, and finally visit the right subtree.

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

## Question 113: Preorder Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the preorder traversal of its nodes' values.

**Preorder Traversal:** Visit the root node, then recursively visit the left subtree, and finally visit the right subtree.

Examples
Example 1:

Input: root = [1, null, 2, 3]
Output: [1, 2, 3]
Explanation:
Preorder traversal visits nodes in the order: 1 -> 2 -> 3.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [1]
Explanation: The tree has only one node, so the traversal returns a list with that single node.

## Question 114: Postorder Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the postorder traversal of its nodes' values.

**Postorder Traversal:** Recursively visit the left subtree, then visit the right subtree, and finally visit the root node.

Examples
Example 1:

Input: root = [1, null, 2, 3]
Output: [3, 2, 1]
Explanation:
Postorder traversal visits nodes in the order: 3 -> 2 -> 1.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [1]
Explanation: The tree has only one node, so the traversal returns a list with that single node.
pre and post
