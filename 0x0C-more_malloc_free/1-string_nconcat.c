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
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (num < 0) /* account for negative n bytes*/
		return (NULL);
	if (num >= _strlen(s2)) /* entire length of s2 is used */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* '+1' acounts for all null pointers*/

	concat = malloc(sizeof(*concat) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < num; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
