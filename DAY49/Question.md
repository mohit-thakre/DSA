# Day 49: Questions

## Question 145: Two Sum in a Binary Search Tree (BST)

**Problem:**  
Given the root of a binary search tree (BST) and a target integer `k`, return `true` if there exist two elements in the BST such that their sum is equal to `k`. Otherwise, return `false`.

**Examples**  
Example 1:

Input: root = [5, 3, 6, 2, 4, null, 7], k = 9  
Output: true  
Explanation: The nodes with values 4 and 5 sum up to 9.

Example 2:

Input: root = [5, 3, 6, 2, 4, null, 7], k = 28  
Output: false  
Explanation: No two nodes in the BST sum up to 28.

Example 3:

Input: root = [2, 1, 3], k = 4  
Output: true  
Explanation: The nodes with values 1 and 3 sum up to 4.

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= n <= 10^4`.
- `-10^4 <= Node.val <= 10^4`.
- `-10^5 <= k <= 10^5`.
- The BST is a valid binary search tree.
- The tree is rooted at `root`.
- All node values are unique.
- The target value `k` is guaranteed to exist within the range of possible sums.

## Question 146: Merge Two Binary Search Trees (BSTs)

**Problem:**  
You are given the roots of two binary search trees (BSTs), `root1` and `root2`. Merge the two BSTs into a single BST that contains all the elements from both trees. The resulting tree should also be a valid BST.

**Examples**  
Example 1:

Input: root1 = [2, 1, 4], root2 = [1, 0, 3]  
Output: [2, 1, 4, 0, 3]  
Explanation: The merged BST contains all elements from both trees while maintaining the BST property.

Example 2:

Input: root1 = [1, null, 8], root2 = [8, 1]  
Output: [8, 1, null, null, 8]  
Explanation: The merged BST contains all elements from both trees while maintaining the BST property.

**Constraints:**

- The number of nodes in both BSTs is `n1` and `n2`.
- `1 <= n1, n2 <= 10^4`.
- `-10^4 <= Node.val <= 10^4`.
- Both `root1` and `root2` are valid binary search trees.
- All node values in each BST are unique.
- The trees are rooted at `root1` and `root2`.

**Note:**  
The merged tree does not need to be balanced, but it must satisfy the BST property.

## Question 147: Preorder Traversal to Binary Search Tree (BST)

**Problem:**  
Given an array of integers representing the preorder traversal of a binary search tree (BST), construct the BST and return its root.

**Examples**

Example 1:

Input: preorder = [8, 5, 1, 7, 10, 12]  
Output: [8, 5, 10, 1, 7, null, 12]  
Explanation: The BST constructed from the preorder traversal is as follows:

```
    8
       / \
      5   10
     / \     \
    1   7     12
```

Example 2:

Input: preorder = [1, 3]  
Output: [1, null, 3]  
Explanation: The BST constructed from the preorder traversal is as follows:

```
    1
     \
      3
```

**Constraints:**

- The number of nodes in the BST is `n`.
- `1 <= n <= 10^4`.
- `-10^4 <= preorder[i] <= 10^4`.
- All values in the preorder array are unique.
- The preorder array represents a valid preorder traversal of a BST.
- The BST is rooted at the first element of the preorder array.
- The resulting tree must satisfy the BST property.
