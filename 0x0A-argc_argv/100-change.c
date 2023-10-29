#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * minCoinsRequired - Calculate the minimum number of coins required for change
 * @cents: The amount of cents for which change is needed
 *
 * Return: The minimum number of coins needed to make the change.
 */

int minCoinsRequired(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}
	}

	return (numCoins);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 for success, 1 for failure.
 */

int main(int argc, char *argv[])
{
	int cents, numCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = minCoinsRequired(cents);

	printf("%d\n", numCoins);
	return (0);
}
