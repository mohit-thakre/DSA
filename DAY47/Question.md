# Day 47: Questions

## Question 139: Delete a Node in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a target value, delete the node with the given value in the BST. Return the root of the modified BST. If the target value does not exist in the BST, return the original tree.

**Examples**  
Example 1:

Input: root = [5, 3, 6, 2, 4, null, 7], key = 3  
Output: [5, 4, 6, 2, null, null, 7]  
Explanation: The node with value 3 is deleted. Its in-order successor (4) replaces it.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, 7], key = 0  
Output: [5, 3, 6, 2, 4, null, 7]  
Explanation: The key 0 does not exist in the BST, so the tree remains unchanged.

Example 3:

Input: root = [], key = 0  
Output: []  
Explanation: The tree is empty, so there is nothing to delete.

Example 4:

Input: root = [1], key = 1  
Output: []  
Explanation: The node with value 1 is deleted, resulting in an empty tree.

## Question 140: Find the Kth Smallest Element in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and an integer `k`, return the `k`th smallest element in the BST.  
The `k`th smallest element is defined as the `k`th element in the in-order traversal of the BST.

**Examples**  
Example 1:

Input: root = [3, 1, 4, null, 2], k = 1  
Output: 1  
Explanation: The in-order traversal of the BST is [1, 2, 3, 4]. The 1st smallest element is 1.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, null, 1], k = 3  
Output: 3  
Explanation: The in-order traversal of the BST is [1, 2, 3, 4, 5, 6]. The 3rd smallest element is 3.

Example 3:

Input: root = [], k = 1  
Output: null  
Explanation: The tree is empty, so there is no `k`th smallest element.

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= k <= n` (if `n > 0`).
- The BST is guaranteed to have unique values.
- If the tree is empty, return `null`.

## Question 141: Find the Kth Largest Element in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and an integer `k`, return the `k`th largest element in the BST.  
The `k`th largest element is defined as the `k`th element in the reverse in-order traversal of the BST.

**Examples**

Example 1:

Input: root = [3, 1, 4, null, 2], k = 1  
Output: 4  
Explanation: The reverse in-order traversal of the BST is [4, 3, 2, 1]. The 1st largest element is 4.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, null, 1], k = 3  
Output: 4  
Explanation: The reverse in-order traversal of the BST is [6, 5, 4, 3, 2, 1]. The 3rd largest element is 4.

Example 3:

Input: root = [], k = 1  
Output: null  
Explanation: The tree is empty, so there is no `k`th largest element.

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= k <= n` (if `n > 0`).
- The BST is guaranteed to have unique values.
- If the tree is empty, return `null`.
