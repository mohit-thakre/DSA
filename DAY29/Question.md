# Day 29: Questions

## Question 85: Delete the Middle Node of the Linked List

**Problem:**  
Given the head of a linked list of integers, delete the middle node of the linked list and return the modified head. However, if the linked list has an even number of nodes, delete the second middle node.

Examples
Example 1:

Input Format:

LL: 1 2 3 4 5

Output: 1 2 4 5

Explanation: Node with value 3 is at the middle node and deleted.

Example 2:

Input Format:

LL: 1 2 3 4

Output: 1 2 4

Explanation: In this example, the linked list has an even number of nodes hence we return the second middle node which is 3.

## Question 86: Check if the given Linked List is Palindrome

**Problem:**  
Given the linked list, determine Linked List is Palindrome or not.

Examples
Example 1:

Input Format:

LL: 1 2 3 2 1

Output: True

Explanation: A linked list with values "1 2 3 2 1" is a palindrome because its elements read the same from left to right and from right to left, making it symmetrical and mirroring itself.

Example 2:

Input Format:

LL: 1 2 3 3 2 1

Output: True

Explanation: A linked list with values "1 2 3 3 2 1" is a palindrome because it reads the same forwards and backwards.

Example 3:

Input Format:

LL: 1 2 3 2 3

Output: False

Explanation: The linked list "1 2 3 2 3" is not a palindrome because it reads differently in reverse order, where "3 2 3 2 1" is not the same as the original sequence "1 2 3 2 3."

---

## Question 87: Remove N-th node from the end of a Linked List

**Problem:**  
Given a linked list and an integer N, the task is to delete the Nth node from the end of the linked list and print the updated linked list.

Example 1:
Input: LL: 1 2 3 4 5

Output: 3
Explanation: This linked list contains a loop of size 3 starting at node with value 3.
Example 2:
Input: LL: LL: 1 -> 2 -> 3 -> 4 -> 9 -> 9

Output: NULL
Explanation: This linked list does not contain a loop hence has no starting point.

---
