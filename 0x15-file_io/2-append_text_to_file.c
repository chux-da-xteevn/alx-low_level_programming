#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the file name
 * @text_content: NULL-terminated
 * string to add at the end of the file
 * Return: 1 upon success, -1 upon failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
