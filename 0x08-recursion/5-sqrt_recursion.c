#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The input number
 *
 * Return: The square root of the number,
 * or -1 if there's no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The input number
 * @i: The current value to check as the potential square root
 *
 * Return: The square root if found, or -1 if not
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
