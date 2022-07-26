#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: if str == Null or insufficient memory available
 * otherwise return a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == 0)
		return (NULL);

	for (i = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len +));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
