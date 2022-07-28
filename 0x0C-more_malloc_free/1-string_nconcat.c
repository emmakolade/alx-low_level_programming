#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: in the allocated memory. string 1
 * @s2: n bytes is present in s2. string 2
 * @n: the maximum number of bytes in s2 to concat to s1
 *
 * Return: NULL if the functions fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		n++;

	concat = malloc(sizeof(char) * (n + 1));

	if (concat == NULL)
		return (NULL);

	n = 0;

	for (i = 0; s1[i]; i++)
		concat[n++] = s2[i];

	concat[n] = '\0';

	return (concat);
}
