# Day 10: Questions

## Question 29: Union of Two Sorted Arrays

**Problem:**  
 Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.
Example 1:
Input:

n = 5,m = 5.
arr1[] = {1,2,3,4,5}  
arr2[] = {2,3,4,4,5}
Output:

{1,2,3,4,5}

Explanation:

Common Elements in arr1 and arr2 are: 2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}

Example 2:
Input:

n = 10,m = 7.
arr1[] = {1,2,3,4,5,6,7,8,9,10}
arr2[] = {2,3,4,4,5,11,12}
Output:
{1,2,3,4,5,6,7,8,9,10,11,12}
Explanation:

Common Elements in arr1 and arr2 are: 2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}

---

## Question 30: Two Sum : Check if a pair with given sum exists in Array

**Problem:**  
Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.
Example 1:  
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14  
Result: YES (for 1st variant)  
 [1, 3] (for 2nd variant)  
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:  
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15  
Result:
NO (for 1st variant)  
 [-1, -1] (for 2nd variant)  
Explanation: There exist no such two numbers whose sum is equal to the target.

---

## Question 31: Sort an array of 0s, 1s and 2s

**Problem:**  
 Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Input:
nums = [2,0,2,1,1,0]
Output
: [0,0,1,1,2,2]

Input:
nums = [2,0,1]
Output:
[0,1,2]

Input:
nums = [0]
Output:
[0]

---
