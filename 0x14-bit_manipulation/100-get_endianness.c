#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */

int get_endianness(void)
{
	unsigned int check = 1;

	char *endian = (char*)&check;

	if (*endian)
		return (1);

	else
		return (0);
}
