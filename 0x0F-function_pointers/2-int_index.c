#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - retunr index place if comparision = tru, else -1
 * @array: array
 * @size: size of element in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: if no element matches or size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}

	return (-1);
}
