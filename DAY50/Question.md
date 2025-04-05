# Day 50: Questions

## Question 148: Extract Maximum from a Binary Heap (Priority Queue)

**Problem:**  
Given a binary heap implementation of a priority queue, extract the maximum element from the queue. This operation should remove the maximum element from the queue and return its value.

**Examples**  
Example 1:

Input: heap = [50, 30, 20, 15, 10, 8, 16]  
Output: 50  
Explanation: The maximum element (50) is removed from the heap. The heap is then restructured to maintain the heap property.

Example 2:

Input: heap = [100, 19, 36, 17, 3, 25, 1, 2, 7]  
Output: 100  
Explanation: The maximum element (100) is removed from the heap. The heap is then restructured to maintain the heap property.

**Constraints:**

- The binary heap is implemented as a max-heap.
- The heap contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= heap[i] <= 10^4`.
- The heap property is maintained after the extraction operation.
- The input heap is represented as an array.

**Note:**  
The extraction operation should be performed in `O(log n)` time complexity.

## Question 149: Max-Heap Implementation with Insert, Delete, and Extract-Max Operations

**Problem:**  
Implement a max-heap data structure that supports the following operations:

1. **Insert**: Add a new element to the heap.
2. **Delete**: Remove an element from the heap.
3. **Extract-Max**: Remove and return the maximum element from the heap.

**Examples**

Example 1:  
Insert Operation  
Input: heap = [50, 30, 20, 15, 10, 8, 16], element = 60  
Output: [60, 50, 20, 30, 10, 8, 16, 15]  
Explanation: The element 60 is added to the heap, and the heap is restructured to maintain the max-heap property.

Example 2:  
Delete Operation  
Input: heap = [50, 30, 20, 15, 10, 8, 16]  
Output: [30, 16, 20, 15, 10, 8]  
Explanation: In a max-heap, the root element (50) is always deleted. After removing 50, the heap is restructured to maintain the max-heap property.

Example 3:  
Extract-Max Operation  
Input: heap = [50, 30, 20, 15, 10, 8, 16]  
Output: 50  
Explanation: The maximum element (50) is removed from the heap. The heap is then restructured to maintain the max-heap property.

**Constraints:**

- The heap contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= heap[i] <= 10^4`.
- All operations should maintain the max-heap property.
- Insert, delete, and extract-max operations should have a time complexity of `O(log n)`.

**Note:**  
The heap is represented as an array, where the parent-child relationship is defined as follows:

- Parent index: `i`
- Left child index: `2i + 1`
- Right child index: `2i + 2`
- For a child at index `i`, the parent index is `(i - 1) // 2`.

## Question 150: Min-Heap Implementation with Insert, Delete, and Extract-Min Operations

**Problem:**  
Implement a min-heap data structure that supports the following operations:

1. **Insert**: Add a new element to the heap.
2. **Delete**: Remove an element from the heap.
3. **Extract-Min**: Remove and return the minimum element from the heap.

**Examples**

Example 1:  
Insert Operation  
Input: heap = [1, 3, 6, 5, 9, 8], element = 2  
Output: [1, 2, 6, 3, 9, 8, 5]  
Explanation: The element 2 is added to the heap, and the heap is restructured to maintain the min-heap property.

Example 2:  
Delete Operation  
Input: heap = [1, 3, 6, 5, 9, 8]  
Output: [3, 5, 6, 8, 9]  
Explanation: In a min-heap, the root element (1) is always deleted. After removing 1, the heap is restructured to maintain the min-heap property.

Example 3:  
Extract-Min Operation  
Input: heap = [1, 3, 6, 5, 9, 8]  
Output: 1  
Explanation: The minimum element (1) is removed from the heap. The heap is then restructured to maintain the min-heap property.

**Constraints:**

- The heap contains `n` elements.
- `1 <= n <= 10^4`.
- `-10^4 <= heap[i] <= 10^4`.
- All operations should maintain the min-heap property.
- Insert, delete, and extract-min operations should have a time complexity of `O(log n)`.

**Note:**  
The heap is represented as an array, where the parent-child relationship is defined as follows:

- Parent index: `i`
- Left child index: `2i + 1`
- Right child index: `2i + 2`
- For a child at index `i`, the parent index is `(i - 1) // 2`.
