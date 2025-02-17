# Day 28: Questions

## Question 82: Detect a Cycle in a Linked List

**Problem:**  
 Given a linked list we have to find the cycle or loop in the linked list

Examples
Example 1:

Input Format:

LL: 1 2 3 4 5

Result: True

Explanation: The last node with the value of 5 has its 'next' pointer pointing back to a previous node with the value of 3. This has resulted in a loop, hence we return true.

Example 2:

Input Format:

LL: 1 2 3 4 9 9

Result: False

## Question 83: Length of Loop in Linked List

**Problem:**  
Given the head of a linked list, determine the length of a loop present in the linked list; if not present, return 0.

Input Format:

LL: 1 2 3 4 5

Output: 3
Explanation: A cycle exists in the linked list starting at node 3 -> 4 -> 5 and then back to 3. There are 3 nodes present in this cycle.

Example 2:

Input Format:

LL: 1 2 3 4 9 9

Output: 0

Explanation: In this example, the linked list is linear and does not have a loop hence return 0.

---

## Question 84: Starting point of loop in a Linked List

**Problem:**  
Given the head of a linked list that may contain a cycle, return the starting point of that cycle. If there is no cycle in the linked list return null.

Example 1:
Input: LL: 1 2 3 4 5

Output: 3
Explanation: This linked list contains a loop of size 3 starting at node with value 3.
Example 2:
Input: LL: LL: 1 -> 2 -> 3 -> 4 -> 9 -> 9

Output: NULL
Explanation: This linked list does not contain a loop hence has no starting point.

---
