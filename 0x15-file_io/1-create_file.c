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
	int o, w, letter = 0;
	
	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (letter = 0, text_content[letter]; letter++;)
	}

	o = open (filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write (o, text_content, letter);
	
	if (o == -1 || w == -1)
		return (-1);
	
	close (o);
	
	return (1);
	
}