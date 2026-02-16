# Reverse Integer

## Problem

Given a signed 32-bit integer x, return x with its digits reversed.

If reversing x causes the value to go outside the signed 
32-bit integer range [-2^31, 2^31 - 1], return 0.

Note: 64-bit integers are not allowed.

---

## Approach

We reverse the number digit by digit using:

digit = x % 10  
x = x / 10  

Before updating:

reversed = reversed * 10 + digit

we check whether multiplying by 10 will cause overflow.

---

## Overflow Logic

INT_MAX = 2147483647  
INT_MIN = -2147483648  

If:

reversed > INT_MAX / 10  
OR  
reversed == INT_MAX / 10 AND digit > 7  

→ Positive overflow

If:

reversed < INT_MIN / 10  
OR  
reversed == INT_MIN / 10 AND digit < -8  

→ Negative overflow

Return 0 if overflow occurs.

---

## Time Complexity

Each iteration removes one digit.

Time Complexity: O(log n)

---

## Space Complexity

Only constant variables used.

Space Complexity: O(1)

---

## Key Learning

- Digit extraction using modulus
- Defensive overflow checking
- Handling 32-bit integer boundaries
- Writing constraint-aware solutions
