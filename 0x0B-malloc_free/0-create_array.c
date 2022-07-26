#include "main.h"
#include <stdlib.h>

/**
 * create_array - unsigned int size
 * @c: the specific char to initialize the array with.
 * @size: the size of the array to be initialized
 *
 * Return: NULL if size = 0 if othwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size, i++)
		array[i] = c;

	return (array);
}
