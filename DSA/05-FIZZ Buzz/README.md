# Fizz Buzz

## Problem

Given an integer n, return a string array answer (1-indexed) where:

- If i is divisible by 3 → "Fizz"
- If i is divisible by 5 → "Buzz"
- If i is divisible by both 3 and 5 → "FizzBuzz"
- Otherwise → the number itself as a string

---

## Approach

Iterate from 1 to n.

For each number:
1. Check divisibility by both 3 and 5 first.
2. Then check divisibility by 3.
3. Then check divisibility by 5.
4. Otherwise convert number to string.

Important:
We check (i % 3 == 0 && i % 5 == 0) first
to avoid missing the combined case.

---

## Algorithm

For i from 1 to n:
    If i divisible by 3 and 5:
        add "FizzBuzz"
    Else if divisible by 3:
        add "Fizz"
    Else if divisible by 5:
        add "Buzz"
    Else:
        add number as string

Return answer

---

## Time Complexity

We iterate from 1 to n.

Time Complexity: O(n)

---

## Space Complexity

We store n strings in the vector.

Space Complexity: O(n)

---

## Key Learning

- Proper condition ordering
- Using modulus for divisibility
- Building and returning a vector
- Understanding linear complexity