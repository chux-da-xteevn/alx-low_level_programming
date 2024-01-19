#include "Python.h"

/**
 * add - Add two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * subtract - Subtract two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of a and b.
 */
int subtract(int a, int b)
{
    return a - b;
}

/**
 * multiply - Multiply two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
    return a * b;
}

/**
 * divide - Divide two integers.
 * @a: First integer.
 * @b: Second integer (non-zero).
 *
 * Return: The result of the division of a by b.
 */
int divide(int a, int b)
{
    return a / b;
}

/**
 * modulo - Compute the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int modulo(int a, int b)
{
    return a % b;
}

// ... (rest of the code remains unchanged)
