# Day 37: Questions

## Question 109: Next Greater Element in Circular Array

**Problem:**  
Given a circular integer array A, return the next greater element for every element in A in circular direction as well. The next greater element for an element x is the first element greater than x that we come across while traversing the array in a clockwise manner. If it doesn't exist, return -1 for this element.

Examples
Example 1:

Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2;
The number 2 can't find next greater number.
The second 1's next greater number needs to search circularly, which is also 2.
Example 2:

Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]

## Question 110: Next Smallest Element

**Problem:**  
Given an integer array A, return the next smallest element for every element in A. The next smallest element for an element x is the first element smaller than x that we come across while traversing the array. If it doesn't exist, return -1 for this element.

Examples
Example 1:

Input: nums = [3,2,1]
Output: [2,1,-1]
Explanation: The first 3's next smallest number is 2;
The number 2's next smallest number is 1;
The number 1 can't find next smallest number.

Example 2:

Input: nums = [4,3,2,1,5]
Output: [3,2,1,-1,-1]
Explanation: The first 4's next smallest number is 3;
The first 3's next smallest number is 2;
The first 2's next smallest number is 1;
The first 1 can't find next smallest number;
The number 5 can't find next smallest number.

## Question 111: Sum of Subarray Minimums

**Problem:**  
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.
Examples
Example 1:

Input: arr = [3,1,2,4]
Output: 17
Explanation:
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4].
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
Example 2:

Input: arr = [11,81,94,43,3]
Output: 444
