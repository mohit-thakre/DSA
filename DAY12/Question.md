# Day 12: Questions

## Question 35: Stock Buy And Sell

**Problem:**  
You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input:
 prices = [7,1,5,3,6,4]
Output:
 5
Explanation:
 Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note
: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:
Input:
 prices = [7,6,4,3,1]
Output:
 0
Explanation:
 In this case, no transactions are 
done and the max profit = 0.

---

## Question 36: Rearrange Array Elements by Sign

**Problem:**  
There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,-3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 

Positive elements = 1,2,3
Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
Also, -3 should come before -1, and -1 should come before -2.

---

## Question 37: Leaders in an Array

**Problem:**  
 Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.
Example 1:
Input:
 arr = [4, 7, 1, 0]
Output
:
 7 1 0
Explanation:

 Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.

Example 2:
Input:

 arr = [10, 22, 12, 3, 0, 6]
Output:
 22 12 6
Explanation:
 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.
---
