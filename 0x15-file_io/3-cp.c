#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Copies the content of one file to another
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, otherwise exit with an error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_status, write_status;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		read_status = read(fd_from, buffer, 1024);
		if (read_status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_status = write(fd_to, buffer, read_status);
		if (write_status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	} while (read_status > 0);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}

	return (0);
}
