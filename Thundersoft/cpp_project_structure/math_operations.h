#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

// Inline template for addition
template<typename T>
inline T add(T a, T b) {
    return a + b;
}

// Inline template for subtraction
template<typename T>
inline T subtract(T a, T b) {
    return a - b;
}

// Inline template for multiplication
template<typename T>
inline T multiply(T a, T b) {
    return a * b;
}

// Inline template for division
template<typename T>
inline T divide(T a, T b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

#endif // MATH_OPERATIONS_H