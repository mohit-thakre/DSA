# Day 34: Questions

## Question 106: Prefix to Infix

**Problem:**  
Given a prefix expression, your task is to convert the given prefix expression to an infix expression.

Example
Example 1:
Input: *+abc
Output: (a+b)*c
Explanation: Prefix to infix

Example 2:
Input: +a*bc
Output: a+(b*c)
Explanation: Prefix to infix

---

## Question 107: Prefix to Postfix

**Problem:**  
Given a prefix expression, your task is to convert the given prefix expression to a postfix expression.

Example
Example 1:
Input: -+abc
Output: ab+c-
Explanation: Prefix to postfix

Example 2:
Input: +a*bc
Output: abc*+
Explanation: Prefix to postfix

---

## Question 108: Next Greater Element Using Stack

**Problem:**  
Given a circular integer array A, return the next greater element for every element in A. The next greater element for an element x is the first element greater than x that we come across while traversing the array in a clockwise manner. If it doesn't exist, return -1 for this element.

Examples
Example 1:

Input: N = 11, A[] = {3,10,4,2,1,2,6,1,7,2,9}

Output: 10,-1,6,6,2,6,7,7,9,9,10

Explanation: For the first element in A ,i.e, 3, the greater element which comes next to it while traversing and is closest to it is 10. Hence,10 is present on index 0 in the resultant array. Now for the second element,i.e, 10, there is no greater number and hence -1 is it’s next greater element (NGE). Similarly, we got the NGEs for all other elements present in A.

Example 2:

Input: N = 6, A[] = {5,7,1,7,6,0}

Output: 7,-1,7,-1,7,5
