#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_buffer - allocates 1024 bytes to a buffer.
 * @file: the name of the file
 *
 * Return: pointer to the allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;
	
	buffer = malloc(sizeof(char) * 1024);
	
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	
	return (buffer);
}

/**
 * close_file - closes fd.
 * @fd: the file descriptor
 */

void close_file(int fd)
{
	int c;
	
	c = close(fd);
	
	if (c == -1)
	{
		dprinf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_WRONLY)
	r = read(from, buffer,1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		
		w = write(to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(99);
		}
		
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);
	
	free(buffer);
	close(file_from);
	close(file_to);
	
	return (0);
}