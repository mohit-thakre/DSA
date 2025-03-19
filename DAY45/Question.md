# Day 45: Questions

## Question 133: Check if a Binary Search Tree (BST) is Valid

**Problem:**  
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

**Valid BST:** A binary search tree is valid if:

1. The left subtree of a node contains only nodes with values less than the node's value.
2. The right subtree of a node contains only nodes with values greater than the node's value.
3. Both the left and right subtrees must also be binary search trees.

Examples  
Example 1:

Input: root = [2, 1, 3]  
Output: true  
Explanation:  
The tree is a valid BST because 1 < 2 < 3.

Example 2:

Input: root = [5, 1, 4, null, null, 3, 6]  
Output: false  
Explanation:  
The tree is not a valid BST because the node with value 4 is in the right subtree of 5 but is less than 5.

Example 3:

Input: root = []  
Output: true  
Explanation:  
The tree is empty, so it is a valid BST by definition.

## Question 134: Find Minimum and Maximum in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST), find the minimum and maximum values in the tree.

**Binary Search Tree (BST):**  
In a BST:

1. The left subtree of a node contains only nodes with values less than the node's value.
2. The right subtree of a node contains only nodes with values greater than the node's value.

**Approach:**

- The minimum value in a BST is found by traversing the leftmost path from the root.
- The maximum value in a BST is found by traversing the rightmost path from the root.

Examples  
Example 1:

Input: root = [4, 2, 6, 1, 3, 5, 7]  
Output: Minimum = 1, Maximum = 7  
Explanation:  
The leftmost node is 1, and the rightmost node is 7.

Example 2:

Input: root = [10, 5, 15, null, null, 12, 20]  
Output: Minimum = 5, Maximum = 20  
Explanation:  
The leftmost node is 5, and the rightmost node is 20.

Example 3:

Input: root = []  
Output: Minimum = null, Maximum = null  
Explanation:  
The tree is empty, so there are no minimum or maximum values.

## Question 135: Search for an Element in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a target value, determine if the target value exists in the BST.

**Binary Search Tree (BST):**  
In a BST:

1. The left subtree of a node contains only nodes with values less than the node's value.

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
