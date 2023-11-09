#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on incorrect number of arguments, 2 on negative bytes
 */
int main(int argc, char *argv[])
{
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_opcodes = (unsigned char *)main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", main_opcodes[i]);
		if (i < nbytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
