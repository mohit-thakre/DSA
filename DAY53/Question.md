# Day 53: Questions

## Question 157: K Most Frequent Elements

**Problem:**  
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

**Examples**

Example 1:  
Input: nums = [1,1,1,2,2,3], k = 2  
Output: [1,2]  
Explanation: The two most frequent elements are 1 and 2.

Example 2:  
Input: nums = [1], k = 1  
Output: [1]  
Explanation: The only element is 1, which is the most frequent.

**Constraints:**

- `1 <= nums.length <= 10^5`
- `k` is in the range `[1, the number of unique elements in nums]`.
- `-10^4 <= nums[i] <= 10^4`

**Note:**  
To find the `k` most frequent elements:

1. Count the frequency of each element using a hash map.
2. Use a heap (priority queue) to keep track of the top `k` elements based on their frequency.
3. Extract the elements from the heap to form the result.

The time complexity of this approach is `O(n log k)`, where `n` is the size of the array.

// maps ans tries

## Question 158: Two Sum Using Maps

**Problem:**  
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`. You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Examples**

Example 1:  
Input: nums = [2,7,11,15], target = 9  
Output: [0,1]  
Explanation: nums[0] + nums[1] = 2 + 7 = 9.

Example 2:  
Input: nums = [3,2,4], target = 6  
Output: [1,2]  
Explanation: nums[1] + nums[2] = 2 + 4 = 6.

Example 3:  
Input: nums = [3,3], target = 6  
Output: [0,1]  
Explanation: nums[0] + nums[1] = 3 + 3 = 6.

**Constraints:**

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

**Note:**  
To solve the problem using maps:

1. Create a hash map to store the difference between the target and each element as you iterate through the array.
2. For each element, check if it exists in the hash map. If it does, return the indices of the current element and the stored index.
3. If not, store the current element and its index in the hash map.

The time complexity of this approach is `O(n)`, where `n` is the size of the array.

## Question 156: Group Anagrams

**Problem:**  
Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

**Examples**

Example 1:  
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]  
Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]  
Explanation: Anagrams are grouped together.

Example 2:  
Input: strs = [""]  
Output: [[""]]  
Explanation: The only input is an empty string.

Example 3:  
Input: strs = ["a"]  
Output: [["a"]]  
Explanation: The only input is a single character.

**Constraints:**

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

**Note:**  
To group anagrams:

1. Use a hash map where the key is a sorted version of each string, and the value is a list of strings that are anagrams of each other.
2. Iterate through the array, sort each string, and add it to the corresponding list in the hash map.
3. Return the values of the hash map as the result.

The time complexity of this approach is `O(n * k log k)`, where `n` is the number of strings and `k` is the maximum length of a string.
