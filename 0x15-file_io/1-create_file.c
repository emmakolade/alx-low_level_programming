#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates File
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int let;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, o_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	rwr = write(fd, text_content, let);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
