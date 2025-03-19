# Day 44: Questions

## Question 130: Check if a Binary Tree is Balanced

**Problem:**  
Given the root of a binary tree, check if the tree is height-balanced.

**Balanced Tree:** A binary tree is height-balanced if the depth of the two subtrees of every node never differs by more than one.

Examples
Example 1:

Input: root = [3, 9, 20, null, null, 15, 7]
Output: true
Explanation:
The tree is balanced because the height difference between the left and right subtrees of every node is not more than 1.

Example 2:

Input: root = [1, 2, 2, 3, 3, null, null, 4, 4]
Output: false
Explanation:
The tree is not balanced because the height difference between the left and right subtrees of the node with value 2 is more than 1.

Example 3:

Input: root = []
Output: true
Explanation: The tree is empty, so it is balanced by definition.
