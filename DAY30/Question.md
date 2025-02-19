# Day 30: Questions

## Question 88: Sort a Linked List

**Problem:**  
Given a linked list, sort its nodes based on the data value in them. Return the head of the sorted linked list.

Example
Example 1:
Input:Linked List: 3 4 2 1 5

Output:Sorted List: 1 2 3 4 5

Explanation: The input linked list when sorted from [3, 4, 2, 1, 5] results in a linked list with values: [1, 2, 3, 4, 5].

Example 2:
Input:List: 40 20 60 10 50 30

Output: Sorted List: 10 20 30 40 50 60

Explanation: The input linked list when sorted from [40, 20, 60, 10, 50, 30] results in a linked list with values: [10, 20, 30, 40, 50, 60].

---

## Question 89: Add two numbers represented as Linked Lists

**Problem:**  
Given the heads of two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

Examples
Input Format:
(Pointer/Access to the head of the two linked lists)

num1 = 243, num2 = 564

l1 = [2,4,3]
l2 = [5,6,4]

Result: sum = 807; L = [7,0,8]

Explanation: Since the digits are stored in reverse order, reverse the numbers first to get the or original number and then add them as → 342 + 465 = 807.

## Question 90: Segregate even and odd nodes in LinkedList

**Problem:**  
Given a LinkedList of integers. Modify the LinkedList in such a way that in Modified LinkedList all the even numbers appear before all the odd numbers in LinkedList.

Also, note that the order of even and odd numbers should remain the same.

Examples
Example 1:
Input: 1→2→3→4→5→6→Null
Output: 2→4→6→1→3→5→Null
Explanation :
Odd Nodes in LinkedList are 1,3,5 and
Even Nodes in LinkedList are 2,4,6
In Modified LinkedList all even Nodes comes before
all Odd Nodes. So Modified LinkedList looks like
2→4→6→1→3→5→Null. Order of even and odd Nodes is
maintained in modified LinkedList.

Example 2:
Input: 1→3→5→Null
Output: 1→3→5→Null
Explantion: As there are no Even Nodes in LinkedList,
The Modified LinkedList is same as Original LinkedList.

Example 3:
Input: 2→4→6→8→Null
Output: 2→4→6→8→Null
Explanation: As there are no Odd Nodes in LinkedList,
The Modified LinkedList is same as Original LinkedList.

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
