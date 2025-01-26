# Day 11: Questions

## Question 32: Find the Majority Element that occurs more than N/2 times

**Problem:**  
Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

Example 1:
Input Format
: N = 3, nums[] = {3,2,3}
Result
: 3
Explanation
: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Example 2:
Input Format:
  N = 7, nums[] = {2,2,1,1,1,2,2}

Result
: 2

Explanation
: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

Example 3:
Input Format:
  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}

Result
: 4

---

## Question 33: Kadane's Algorithm : Maximum Subarray Sum in an Array

**Problem:**  
Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Example 1:
Input:
 arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output:
 6 

Explanation:
 [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input:
 arr = [1] 

 Output:
 1 
Explanation:
 Array has only one element and which is giving positive sum of 1. 
---

## Question 34: Longest Subarray with given Sum K(Positives)

**Problem:**  
 Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.

---
