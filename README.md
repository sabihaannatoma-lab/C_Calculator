# Scientific Calculator in C

This is a basic calculator project using C language to  demonstrate my understanding of conditional logic,operators , and input/output functions.

## Features
- Basic arithmetic operations (Addition, Subtraction, Multiplication, Division)
- Scientific functions:
  - Square Root
  - Power (x^y)
  - Natural Log (ln)
  - Log base 10
  - Trigonometric functions (sin, cos, tan)
- Menu-driven and loop-based
- Input validation for safe calculations
## 🛠️ Robust Error Handling
To ensure the calculator doesn't crash or give misleading results, I have implemented:
- **Division by Zero Check:** Prevents mathematical errors during division.
- **Negative Square Root Validation:** Handles imaginary number cases for square roots.
- **Logarithmic Constraints:** Ensures inputs for `ln` and `log10` are greater than zero.
- **Tangent Edge Cases:** Specifically handles undefined values at 90°, 270°, etc., using `fmod()` logic to prevent incorrect large values.

## How to Run
1. Compile the program using a C compiler:
2. Run the program:

## Purpose
This project was created to practice C programming concepts such as:
- Loops
- Switch-case
- Functions from math.h
- Error handling

## Author
Tabassum


   
   
 
