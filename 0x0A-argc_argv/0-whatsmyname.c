#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])

	{
	if (argc >= 1)
	{
		printProgramName(argv[0]);
	}
	return (0);
}
