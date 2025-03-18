# Day 42: Questions

## Question 127: Boundary Traversal of a Binary Tree

**Problem:**  
Given the root of a binary tree, return the boundary traversal of the tree.

**Boundary Traversal:** The boundary traversal of a binary tree is the set of nodes that form the boundary of the tree. The boundary includes the left boundary, leaves, and the right boundary (excluding the root and leaves that are already included in the left or right boundary).

Examples
Example 1:

Input: root = [1, 2, 3, 4, 5, 6, 7]
Output: [1, 2, 4, 5, 6, 7, 3]
Explanation:
The boundary traversal of the tree is 1, 2, 4, 5, 6, 7, 3.

Example 2:

Input: root = [1, 2, 3, null, 5, null, 4]
Output: [1, 2, 5, 4, 3]
Explanation:
The boundary traversal of the tree is 1, 2, 5, 4, 3.

Example 3:

Input: root = []
Output: []
Explanation: The tree is empty, so the boundary traversal is an empty list.

## Question 128: Same Tree

**Problem:**  
Given the roots of two binary trees, check if they are the same or not.

**Same Tree:** Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Examples
Example 1:

Input: p = [1, 2, 3], q = [1, 2, 3]
Output: true
Explanation:
The two trees are the same.

Example 2:

Input: p = [1, 2], q = [1, null, 2]
Output: false
Explanation:
The two trees are not the same.

Example 3:

Input: p = [], q = []
Output: true
Explanation: Both trees are empty, so they are the same.

## Question 129: Diameter of a Binary Tree

**Problem:**  
Given the root of a binary tree, return the length of the diameter of the tree.

**Diameter of Tree:** The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

Examples
Example 1:

Input: root = [1, 2, 3, 4, 5]
Output: 3
Explanation:
The longest path is 4 -> 2 -> 1 -> 3 or 5 -> 2 -> 1 -> 3, and the length is 3.

Example 2:

Input: root = [1, 2]
Output: 1
Explanation:
The longest path is 2 -> 1, and the length is 1.

Example 3:

Input: root = []
Output: 0
Explanation: The tree is empty, so the diameter is 0.
