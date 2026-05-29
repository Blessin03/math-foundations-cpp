# Test Plan - Math Foundations C++ Toolkit

## Purpose

This test plan verifies that the main modules in the Math Foundations C++ Toolkit produce correct mathematical results.

## Test Cases

| Test ID | Feature | Test Input | Expected Result |
|---|---|---|---|
| T1 | Truth Table | AND | Correct truth table for p AND q |
| T2 | Truth Table | IMPLIES | Only true -> false returns false |
| T3 | Function Analyzer | domain: 1 2 3, codomain: a b c, outputs: a b c | Injective: true, Surjective: true, Bijective: true |
| T4 | Function Analyzer | domain: 1 2 3, codomain: a b c, outputs: a a b | Injective: false, Surjective: false, Bijective: false |
| T5 | Vector Tool | a = {1,2,3}, b = {4,5,6} | Dot product = 32 |
| T6 | Matrix Tool | A = {{1,2},{3,4}}, B = {{5,6},{7,8}} | A * B = {{19,22},{43,50}} |
| T7 | Calculus Tool | derivative of x^2 at x = 3 | Approximately 6 |
| T8 | Calculus Tool | integral of x^2 from 0 to 1, n = 100 | Approximately 0.333333 |
| T9 | Report Writer | Export session report | Text file is created successfully |

## Testing Method

Testing is performed manually through the console menu. Results are compared with known mathematical outputs.