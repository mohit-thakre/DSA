# Day 41: Questions

## Question 121: Top View of Binary Tree

**Problem:**  
Given the root of a binary tree, return the top view of the tree.

**Top View:** The top view of a binary tree is the set of nodes visible when the tree is viewed from the top. The nodes are returned in order from left to right.

Examples
Example 1:

Input: root = [1, 2, 3, 4, 5, 6, 7]
Output: [4, 2, 1, 3, 7]
Explanation:
The top view of the tree is 4, 2, 1, 3, 7.

Example 2:

Input: root = [1, 2, 3, null, 5, null, 4]
Output: [2, 1, 3, 4]
Explanation:
The top view of the tree is 2, 1, 3, 4.

Example 3:

Input: root = []
Output: []
Explanation: The tree is empty, so the top view is an empty list.

## Question 122: Vertical Order Traversal of Binary Tree

**Problem:**  
Given the root of a binary tree, return the vertical order traversal of its nodes' values.

**Vertical Order Traversal:** The vertical order traversal of a binary tree is a list of lists of nodes' values, where each list contains the nodes that are vertically aligned in the tree, ordered from left to right.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: [[9], [3, 15], [20], [7]]
Explanation:
The vertical order traversal of the tree is [[9], [3, 15], [20], [7]].

Example 2:

Input: root = []
Output: []
Explanation: The tree is empty, so the vertical order traversal is an empty list.

Example 3:

Input: root = [1]
Output: [[1]]
Explanation: The tree has only one node, so the vertical order traversal is a list with that single node.

## Question 123: Bottom View of Binary Tree

**Problem:**  
Given the root of a binary tree, return the bottom view of the tree.

**Bottom View:** The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom. The nodes are returned in order from left to right, considering the last visited node at each horizontal distance.

Examples
Example 1:

Input: root = [1, 2, 3, 4, 5, 6, 7]
Output: [4, 2, 6, 3, 7]
Explanation:
The bottom view of the tree is 4, 2, 5, 6, 7.

Example 2:

Input: root = [1, 2, 3, null, 5, null, 4]
Output: [2, 5, 4]
Explanation:
The bottom view of the tree is 2, 5, 4.

Example 3:

Input: root = []
Output: []
Explanation: The tree is empty, so the bottom view is an empty list.
