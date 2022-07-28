#include "main.h"
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: number of elements
 * @size: the size of array element
 *
 * Return: Null if nmenmb or size is 0
 * if malloc fails then return null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (mem);
}
