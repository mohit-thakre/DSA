# Day 46: Questions

## Question 136: Find the Ceil of a Value in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a target value, find the ceil of the target value in the BST.  
The ceil of a value is the smallest value in the BST that is greater than or equal to the target value. If no such value exists, return `null`.

**Binary Search Tree (BST):**  
In a BST:

1. The left subtree of a node contains only nodes with values less than the node's value.
2. The right subtree of a node contains only nodes with values greater than the node's value.

**Examples**  
Example 1:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 5  
Output: 6  
Explanation:  
The smallest value greater than or equal to 5 is 6.

Example 2:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 13  
Output: 14  
Explanation:  
The smallest value greater than or equal to 13 is 14.

Example 3:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 15  
Output: null  
Explanation:  
There is no value greater than or equal to 15 in the BST.

Example 4:

Input: root = [], target = 5  
Output: null  
Explanation:  
The tree is empty, so there is no ceil value.

## Question 137: Find the Floor of a Value in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a target value, find the floor of the target value in the BST.  
The floor of a value is the largest value in the BST that is less than or equal to the target value. If no such value exists, return `null`.

**Binary Search Tree (BST):**  
In a BST:

1. The left subtree of a node contains only nodes with values less than the node's value.
2. The right subtree of a node contains only nodes with values greater than the node's value.

**Examples**  
Example 1:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 5  
Output: 4  
Explanation:  
The largest value less than or equal to 5 is 4.

Example 2:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 13  
Output: 12  
Explanation:  
The largest value less than or equal to 13 is 12.

Example 3:

Input: root = [8, 4, 12, 2, 6, 10, 14], target = 1  
Output: null  
Explanation:  
There is no value less than or equal to 1 in the BST.

Example 4:

Input: root = [], target = 5  
Output: null  
Explanation:  
The tree is empty, so there is no floor value.

## Question 138: Insert an Element in a Binary Search Tree (BST)

**Problem:**  
Given the root of a Binary Search Tree (BST) and a target value, insert the target value into the BST. If the tree is empty, create a new node with the target value as the root. Return the modified BST after insertion.

**Examples**

Example 1:

Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]
Explanation: Another accepted tree is:

Example 2:

Input: root = [40,20,60,10,30,50,70], val = 25
Output: [40,20,60,10,30,50,70,null,null,25]
Example 3:

Input: root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
Output: [4,2,7,1,3,5]
