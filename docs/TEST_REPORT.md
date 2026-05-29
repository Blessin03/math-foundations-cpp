# Test Report — Math Foundations C++ Toolkit

## Summary

Manual testing was performed on the major features of the Math Foundations C++ Toolkit.

## Test Results

| Test ID | Feature | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| T1 | Truth Table AND | Correct AND truth table |  |  |
| T2 | Truth Table IMPLIES | Only true -> false returns false |  |  |
| T3 | Function Analyzer Bijective Case | Injective: true, Surjective: true, Bijective: true |  |  |
| T4 | Function Analyzer Non-Bijective Case | Injective: false, Surjective: false, Bijective: false |  |  |
| T5 | Vector Dot Product | Dot product = 32 |  |  |
| T6 | Matrix Multiplication | A * B = {{19,22},{43,50}} |  |  |
| T7 | Numerical Derivative | x^2 at x = 3 gives approximately 6 |  |  |
| T8 | Trapezoidal Integration | x^2 from 0 to 1 gives approximately 0.333333 |  |  |
| T9 | Report Export | Session report text file is created |  |  |

## Notes

- Numerical calculus results are approximate.
- Small floating-point differences are acceptable.
- Manual testing was used for this version.