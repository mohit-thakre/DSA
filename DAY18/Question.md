# Day 18: Questions

## Question 52: Peak element in Array

**Problem:**  
Given an array of length N. Peak element is defined as the element greater than both of its neighbors. Formally, if 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

Note: For the first element, the previous element should be considered as negative infinity as well as for the last element, the next element should be considered as negative infinity.

Example 1:
Input Format: arr[] = {1,2,3,4,5,6,7,8,5,1}
Result: 7
Explanation: In this example, there is only 1 peak that is at index 7.

Example 2:
Input Format: arr[] = {1,2,1,3,5,6,4}
Result: 1
Explanation: In this example, there are 2 peak numbers that are at indices 1 and 5. We can consider any of them.

Example 3:
Input Format: arr[] = {1, 2, 3, 4, 5}
Result: 4
Explanation: In this example, there is only 1 peak that is at the index 4.

Example 4:
Input Format: arr[] = {5, 4, 3, 2, 1}
Result: 0
Explanation: In this example, there is only 1 peak that is at the index 0.

---

## Question 53: Finding Sqrt of a number using Binary Search

**Problem:**  
You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of 'sqrt(n)'.

Note: The question explicitly states that if the given number, n, is not a perfect square, our objective is to find the maximum number, x, such that x squared is less than or equal to n (x\*x <= n). In other words, we need to determine the floor value of the square root of n.

Example 1:
Input Format:
n = 36
Result:
6
Explanation:
6 is the square root of 36.

Example 2:
Input Format:
n = 28
Result:
5
Explanation:
Square root of 28 is approximately 5.292. So, the floor value will be 5.

---

## Question 54: Nth Root of a Number using Binary Search

**Problem:**  
Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.

Example 1:
Input Format:
N = 3, M = 27
Result:
3
Explanation:
The cube root of 27 is equal to 3.

Example 2:
Input Format:
N = 4, M = 69
Result:
-1
Explanation:
The 4th root of 69 does not exist. So, the answer is -1.

---
