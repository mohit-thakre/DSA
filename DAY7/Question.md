# Day 7: Questions

## Question 20: Remove Duplicates in-place from Sorted Array

**Problem:**  
 Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
Example 1:
Input:
arr[1,1,2,2,2,3,3]

Output:
arr[1,2,3,_,_,_,_]

Explanation:
Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2:
Input:
arr[1,1,1,2,2,3,3,3,3,4,4]

Output:
arr[1,2,3,4,_,_,_,_,_,_,_]

Explanation:
Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

---

## Question 21: Left Rotate the Array by One

**Problem:**  
Given an array of N integers, left rotate the array by one place.

Example 1:
Input:
N = 5, array[] = {1,2,3,4,5}
Output:
2,3,4,5,1
Explanation:

Since all the elements in array will be shifted
toward left by one so ‘2’ will now become the
first index and and ‘1’ which was present at
first index will be shifted at last.

Example 2:
Input:
N = 1, array[] = {3}
Output:
3
Explanation:
Here only element is present and so
the element at first index will be shifted to
last index which is also by the way the first index

---

## Question 22: Right Rotate the Array by One

**Problem:**  
Given an array of N integers, right rotate the array by one place.

Example 1:
Input:
N = 5, array[] = {1, 2, 3, 4, 5}  
Output:
5, 1, 2, 3, 4  
\*\*Explanation:
Since all the elements in the array will be shifted toward the right by one, the last element `5` will now become the first index, and the other elements will shift one index forward.

---

Example 2:
Input:
N = 1, array[] = {3}  
Output:
3  
**Explanation:**  
Since only one element is present, the element at the first index will be shifted to the last index, which is also the first index in this case.
