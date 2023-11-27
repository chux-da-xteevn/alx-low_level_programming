#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with a specified content
 * @filename: Name of the file to be created
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 upon success, -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			continue;

		write_status = write(fd, text_content, length);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
