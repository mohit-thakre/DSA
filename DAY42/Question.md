# Day 42: Questions

## Question 124: Right View of Binary Tree

**Problem:**  
Given the root of a binary tree, return the right view of the tree.

**Right View:** The right view of a binary tree is the set of nodes visible when the tree is viewed from the right side. The nodes are returned in order from top to bottom.

Examples
Example 1:

Input: root = [1, 2, 3, null, 5, null, 4]
Output: [1, 3, 4]
Explanation:
The right view of the tree is 1, 3, 4.

Example 2:

Input: root = [1, 2, 3, 4, 5, 6, 7]
Output: [1, 3, 7]
Explanation:
The right view of the tree is 1, 3, 7.

Example 3:

Input: root = []
Output: []
Explanation: The tree is empty, so the right view is an empty list.

## Question 125: Left View of Binary Tree

**Problem:**  
Given the root of a binary tree, return the left view of the tree.

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

## Question 126: Check for Symmetrical Binary Tree

**Problem:**  
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

**Symmetrical Tree:** A binary tree is symmetrical if the left subtree is a mirror reflection of the right subtree.

Examples
Example 1:

Input: root = [1, 2, 2, 3, 4, 4, 3]
Output: true
Explanation:
The tree is symmetric.

Example 2:

Input: root = [1, 2, 2, null, 3, null, 3]
Output: false
Explanation:
The tree is not symmetric.

Example 3:

Input: root = []
Output: true
Explanation: The tree is empty, so it is symmetric.
