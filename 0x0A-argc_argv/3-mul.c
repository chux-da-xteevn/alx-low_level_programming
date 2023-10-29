#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiply two integers
 * @num1: The first integer
 * @num2: The second integer
 *
 * Return: The result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
	{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
