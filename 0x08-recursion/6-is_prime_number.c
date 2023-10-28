#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The input integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check for prime
 * @n: The input integer
 * @i: The current value to check as a potential divisor
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
