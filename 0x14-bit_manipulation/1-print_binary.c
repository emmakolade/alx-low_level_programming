#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number 
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	print_binary( n << 3);

	_putchar(n % 10) + '0');
}
