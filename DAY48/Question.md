# Day 48: Questions

## Question 142: Lowest Common Ancestor in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and two nodes `p` and `q`, find the lowest common ancestor (LCA) of the two nodes in the BST.  
The LCA of two nodes `p` and `q` in a BST is defined as the lowest node in the BST that has both `p` and `q` as descendants (where we allow a node to be a descendant of itself).

**Examples**  
Example 1:

Input: root = [6, 2, 8, 0, 4, 7, 9, null, null, 3, 5], p = 2, q = 8  
Output: 6  
Explanation: The LCA of nodes 2 and 8 is 6.

Example 2:

Input: root = [6, 2, 8, 0, 4, 7, 9, null, null, 3, 5], p = 2, q = 4  
Output: 2  
Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself.

Example 3:

Input: root = [4, 2, 6, 1, 3, 5, 7], p = 2, q = 6  
Output: 4  
Explanation: The LCA of nodes 2 and 6 is 4.

**Constraints:**

- The number of nodes in the BST is `n`.
- `2 <= n <= 10^5`.
- All node values are unique.
- `p` and `q` are different and exist in the BST.
- The BST is a valid binary search tree.
- The values of `p` and `q` are guaranteed to be in the BST.
- The tree is rooted at `root`.

## Question 143: Inorder Successor in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a node `p`, find the inorder successor of that node in the BST.  
The inorder successor of a node `p` is the node with the smallest key greater than `p.val`. If no such node exists, return `null`.

**Examples**  
Example 1:

Input: root = [2, 1, 3], p = 1  
Output: 2  
Explanation: The inorder successor of node 1 is node 2.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, null, 1], p = 6  
Output: null  
Explanation: The inorder successor of node 6 does not exist, so we return `null`.

Example 3:

Input: root = [2, 1, 3], p = 2  
Output: 3  
Explanation: The inorder successor of node 2 is node 3.

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= n <= 10^4`.
- All node values are unique.
- `p` is a node in the BST.
- The BST is a valid binary search tree.
- The tree is rooted at `root`.
- The value of `p` is guaranteed to exist in the BST.

## Question 144: Inorder Predecessor in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a node `p`, find the inorder predecessor of that node in the BST.  
The inorder predecessor of a node `p` is the node with the largest key smaller than `p.val`. If no such node exists, return `null`.

**Examples**

Example 1:

Input: root = [2, 1, 3], p = 2  
Output: 1  
Explanation: The inorder predecessor of node 2 is node 1.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, null, 1], p = 3  
Output: 2  
Explanation: The inorder predecessor of node 3 is node 2.

Example 3:

Input: root = [2, 1, 3], p = 1  
Output: null  
Explanation: The inorder predecessor of node 1 does not exist, so we return `null`.

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= n <= 10^4`.
- All node values are unique.
- `p` is a node in the BST.
- The BST is a valid binary search tree.
- The tree is rooted at `root`.
- The value of `p` is guaranteed to exist in the BST.
