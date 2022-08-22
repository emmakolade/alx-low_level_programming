#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Append text to File
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int let;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
			;
		rwr = write(fd, text_content, let);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
