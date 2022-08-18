#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index starting from '0' of the bit
 * @n: the bit
 *
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = ((n >> index) & 1);
	if (index > 8)
		return (-1);
	else
		return (bit);
}
