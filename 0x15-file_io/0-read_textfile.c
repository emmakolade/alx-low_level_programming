#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and print it to POSIX standard output
 * @letters: the number of letter to be printed and read
 * @filename: the name of the file
 * Return: 0, if the filename is NULL
 * also if write fails and does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, n;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) *(letters));
	if (buffer == NULL)
		return (0);

	i = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, i);

	close(fd);
	free(buffer);

	return(n);

}