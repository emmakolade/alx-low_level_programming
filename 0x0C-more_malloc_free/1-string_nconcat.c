#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculates and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @si: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 *
 * Return: pointer to concatenated string
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
