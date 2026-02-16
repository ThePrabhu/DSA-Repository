# Add Digits

## Problem

Given an integer num, repeatedly add all its digits until the result has only one digit.

Example:
Input: 38
Output: 2

Explanation:
3 + 8 = 11
1 + 1 = 2

---

## Approach (Iterative Digit Sum)

We repeatedly:
1. Extract digits using modulus (num % 10)
2. Add them to a running sum
3. Replace num with the computed sum
4. Repeat until num becomes a single digit

Outer loop ensures the process continues
until num < 10.

---

## Algorithm

While num >= 10:
    sum = 0
    While num > 0:
        digit = num % 10
        sum += digit
        num = num / 10
    num = sum

Return num

---

## Time Complexity

Each digit extraction takes O(log n).

Worst case:
We reduce digits repeatedly, but each reduction significantly
shrinks the number.

Overall Time Complexity: O(log n)

---

## Space Complexity

Only constant variables used.

Space Complexity: O(1)

---

## Key Learning

- Repeated digit extraction
- Nested loop reasoning
- Understanding number reduction
- Difference between brute force and mathematical optimization
