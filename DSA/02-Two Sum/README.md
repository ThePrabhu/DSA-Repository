# Two Sum

## Problem
Given an array of integers and a target value, return the indices of the two numbers that add up to the target.

## Approach (Brute Force)

Use two nested loops:
- First loop selects element i
- Second loop checks elements after i
- If nums[i] + nums[j] == target, return indices

## Time Complexity

Outer loop runs n times.
Inner loop runs (n-1) + (n-2) + ... + 1 times.

Total operations ≈ n(n-1)/2

Time Complexity: O(n^2)

## Space Complexity

No extra data structures used.
Only constant variables.

Space Complexity: O(1)

## Key Learning

- Understanding nested loop growth
- Deriving n(n-1)/2 pattern
- Difference between brute force and optimized approach
