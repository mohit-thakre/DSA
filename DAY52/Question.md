# Day 53: Questions

## Question 154: Merge k Sorted Arrays

**Problem:**  
Given a matrix of size `k x k`, convert it into a single sorted array in non-decreasing order.

**Examples**

Example 1:  
Input: matrix =

```
[
   [10, 20, 30],
   [15, 25, 35],
   [27, 29, 37]
]
```

Output: [10, 15, 20, 25, 27, 29, 30, 35, 37]  
Explanation: The elements of the matrix are extracted and sorted into a single array.

Example 2:  
Input: matrix =

```
[
   [1, 5],
   [2, 6]
]
```

Output: [1, 2, 5, 6]  
Explanation: The elements of the matrix are extracted and sorted into a single array.

**Constraints:**

- The matrix contains `k x k` elements.
- `1 <= k <= 100`.
- `-10^4 <= matrix[i][j] <= 10^4`.

**Note:**  
To convert a matrix into a single sorted array:

1. Extract all elements from the matrix into a single list.
2. Sort the list in non-decreasing order.
3. Return the sorted list.

The time complexity of this approach is `O(k^2 log(k^2))`, where `k` is the size of the matrix.

## Question 155: Merge k Sorted Linked Lists

**Problem:**  
You are given an array of `k` linked lists, where each linked list is sorted in ascending order. Merge all the linked lists into one sorted linked list and return it.

**Examples**

Example 1:  
Input: lists = [[1,4,5],[1,3,4],[2,6]]  
Output: [1,1,2,3,4,4,5,6]  
Explanation: The merged linked list contains all elements from the input lists in sorted order.

Example 2:  
Input: lists = []  
Output: []  
Explanation: There are no linked lists to merge.

Example 3:  
Input: lists = [[]]  
Output: []  
Explanation: The input contains an empty linked list.

**Constraints:**

- `k == lists.length`
- `0 <= k <= 10^4`
- `0 <= lists[i].length <= 500`
- `-10^4 <= lists[i][j] <= 10^4`
- The linked lists are sorted in ascending order.
- The sum of `lists[i].length` will not exceed `10^4`.

**Note:**  
To merge `k` sorted linked lists:

1. Use a priority queue (min-heap) to keep track of the smallest elements from each list.
2. Initialize the heap with the head of each linked list.
3. Extract the smallest element from the heap, add it to the merged list, and push the next element from the same list into the heap.
4. Repeat until the heap is empty.

The time complexity of this approach is `O(n log k)`, where `n` is the total number of elements across all linked lists, and `k` is the number of linked lists.

## Question 156: Replace Each Array Element by Its Corresponding Rank

**Problem:**  
Given an array of integers, replace each element with its rank when the array is sorted in non-decreasing order. The rank of an element is its position in the sorted array, starting from 1.

**Examples**

Example 1:  
Input: array = [40, 10, 20, 30]  
Output: [4, 1, 2, 3]  
Explanation: When sorted, the array becomes [10, 20, 30, 40]. The ranks are assigned as follows:

- 40 → 4
- 10 → 1
- 20 → 2
- 30 → 3

Example 2:  
Input: array = [100, 100, 100]  
Output: [1, 1, 1]  
Explanation: All elements are the same, so they share the same rank.

Example 3:  
Input: array = [37, 12, 28, 9, 100, 56, 80]  
Output: [5, 3, 4, 1, 7, 6, 6]  
Explanation: When sorted, the array becomes [9, 12, 28, 37, 56, 80, 100]. The ranks are assigned as follows:

- 37 → 5
- 12 → 3
- 28 → 4
- 9 → 1
- 100 → 7
- 56 → 6
- 80 → 6

**Constraints:**

- The array contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= array[i] <= 10^4`.

**Note:**  
To replace each element with its rank:

1. Create a sorted copy of the array with unique elements.
2. Assign ranks to the elements based on their positions in the sorted array.
3. Replace each element in the original array with its corresponding rank.

The time complexity of this approach is `O(n log n)` due to sorting.
