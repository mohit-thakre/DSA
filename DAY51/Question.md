# Day 51: Questions

## Question 151: Check if an Array Represents a Max-Heap

**Problem:**  
Given an array, determine if it represents a max-heap. A max-heap is a binary tree where the value of each node is greater than or equal to the values of its children.

**Examples**

Example 1:  
Input: array = [50, 30, 20, 15, 10, 8, 16]  
Output: true  
Explanation: The array satisfies the max-heap property. For every element at index `i`, the value is greater than or equal to its children at indices `2i + 1` and `2i + 2`.

Example 2:  
Input: array = [10, 15, 14, 25, 30]  
Output: false  
Explanation: The array does not satisfy the max-heap property because the parent node at index 0 (10) is less than its child at index 1 (15).

Example 3:  
Input: array = [100, 50, 30, 20, 10, 5]  
Output: true  
Explanation: The array satisfies the max-heap property.

**Constraints:**

- The array contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= array[i] <= 10^4`.

**Note:**  
To check if an array represents a max-heap, verify that for every element at index `i` (0-based indexing), the following conditions hold:

1. If the left child exists at index `2i + 1`, then `array[i] >= array[2i + 1]`.
2. If the right child exists at index `2i + 2`, then `array[i] >= array[2i + 2]`.

The check should be performed in `O(n)` time complexity.

## Question 152: Convert Max-Heap to Min-Heap

**Problem:**  
Given a max-heap, convert it into a min-heap. A min-heap is a binary tree where the value of each node is less than or equal to the values of its children.

**Examples**

Example 1:  
Input: heap = [50, 30, 20, 15, 10, 8, 16]  
Output: [8, 10, 16, 15, 30, 50, 20]  
Explanation: The max-heap is converted into a min-heap by rearranging the elements to satisfy the min-heap property.

Example 2:  
Input: heap = [100, 50, 30, 20, 10, 5]  
Output: [5, 10, 30, 20, 50, 100]  
Explanation: The max-heap is converted into a min-heap by rearranging the elements to satisfy the min-heap property.

**Constraints:**

- The heap contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= heap[i] <= 10^4`.

**Note:**  
To convert a max-heap to a min-heap, follow these steps:

1. Extract all elements from the max-heap and store them in an array.
2. Build a min-heap from the array using a heapify operation.
3. The resulting heap will satisfy the min-heap property.

The conversion process should have a time complexity of `O(n)`.

## Question 153: Find the Kth Largest Element Using a Priority Queue

**Problem:**  
Given an array of integers and an integer `k`, find the `k`th largest element in the array using a priority queue (min-heap).

**Examples**

Example 1:  
Input: array = [3, 2, 1, 5, 6, 4], k = 2  
Output: 5  
Explanation: The 2nd largest element in the array is 5.

Example 2:  
Input: array = [3, 2, 3, 1, 2, 4, 5, 5, 6], k = 4  
Output: 4  
Explanation: The 4th largest element in the array is 4.

**Constraints:**

- The array contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= array[i] <= 10^4`.
- `1 <= k <= n`.

**Note:**  
To find the `k`th largest element using a priority queue:

1. Create a min-heap of size `k` to store the largest `k` elements.
2. Iterate through the array:
   - If the heap contains fewer than `k` elements, add the current element.
   - Otherwise, compare the current element with the smallest element in the heap (the root). If the current element is larger, replace the root with the current element and reheapify.
3. After processing all elements, the root of the heap will be the `k`th largest element.

The time complexity of this approach is `O(n log k)`, where `n` is the size of the array.
