#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: first value of the array
 * @max: second value of the array
 *
 * Return: the pointer to the newly created array and
 * if min > max, NULL, if malloc fails, NULL
 */
int *array_range(int min, int max)
{
	int array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0, i < size i++)
		array[i] = min++;

	return (array);
}
