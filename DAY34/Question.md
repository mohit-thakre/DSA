# Day 34: Questions

## Question 100: Check for Balanced Parentheses

**Problem:**  
Check Balanced Parentheses. Given string str containing just the characters '(', ')', '{', '}', '[' and ']', check if the input string is valid and return true if the string is balanced otherwise return false.

Example
Example 1:

Input: str = “( )[ { } ( ) ]”

Output: True

Explanation: As every open bracket has its corresponding
close bracket. Match parentheses are in correct order
hence they are balanced.
Example 2:

Input: str = “[ ( )”

Output: False

Explanation: As ‘[‘ does not have ‘]’ hence it is
not valid and will return false.

---

## Question 101:Implement Min Stack : O(2N) and O(N) Space Complexity

**Problem:**  
Implement Min Stack | O(2N) and O(N) Space Complexity. Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Input Format:["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]
[
[ ], [-2], [0], [-3], [ ], [ ], [ ], [ ]
]

Result: [null, null, null, null, -3, null, 0, -2]
Explanation:
stack < long long > st
st.push(-2); Push element in stack
st.push(0); Push element in stack
st.push(-3); Push element in stack
st.getMin(); Get minimum element fromstack
st.pop(); Pop the topmost element
st.top(); Top element is 0
st.getMin(); Minimum element is -2

## Question 102: Infix to Postfix

**Problem:**  
Given an infix expression, Your task is to convert the given infix expression to a postfix expression.

Examples
Example 1:
Input: a+b*(c^d-e)^(f+g*h)-i
Output: abcd^e-fgh*+^*+i-
Explanation: Infix to postfix

Example 2:
Input: (p+q)_(m-n)
Output: pq+mn-_
Explanation: Infix to postfix

---
