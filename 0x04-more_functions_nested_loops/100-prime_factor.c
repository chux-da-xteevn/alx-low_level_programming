#include <unistd.h>


/**
 * largestPrimeFactor - Find the largest prime factor of a number.
 * @n: The input number for which the largest prime factor is calculated.
 *
 * Return: The largest prime factor of 'n'.
 */

long largestPrimeFactor(long n)
{
	long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (long i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	return (largest);
}
#include <stdio.h>

/**
 * main - Entry point for the program
 * largestPrimeFactor: function to produce the
 * Return: Always returns 0.
 */

int main(void)
{
	long number = 612852475143;
	long result = largestPrimeFactor(number);

	char buffer[20];
	int num_chars = snprintf(buffer, sizeof(buffer), "%ld\n", result);

	write(1, buffer, num_chars);

	return (0);
}
