# Day 39: Questions

## Question 115: Left to Right Level Order Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the left to right level order traversal of its nodes' values.

**Left to Right Level Order Traversal:** Traverse the tree level by level from left to right.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: [[3], [9, 20], [15, 7]]
Explanation:
Left to right level order traversal visits nodes in the order: 3 -> 9, 20 -> 15, 7.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [[1]]
Explanation: The tree has only one node, so the traversal returns a list with that single node.

## Question 116: Right to Left Level Order Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the right to left level order traversal of its nodes' values.

**Right to Left Level Order Traversal:** Traverse the tree level by level from right to left.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: [[3], [20, 9], [7, 15]]
Explanation:
Right to left level order traversal visits nodes in the order: 3 -> 20, 9 -> 7, 15.

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the traversal returns an empty list.

Example 3:

Input: root = [1]
Output: [[1]]
Explanation: The tree has only one node, so the traversal returns a list with that single node.

## Question 117: Preorder Traversal of Binary Tree (iterative)

**Problem:**  
Given the root of a binary tree, return the preorder traversal of its nodes' values.

**Preorder Traversal:** Recursively visit the root node, then visit the left subtree, and finally visit the right subtree.

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
