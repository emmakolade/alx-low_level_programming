#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: always return 0
 */
int print_last_digit(int n)
{
	int lastdig;

	lastdig = (n % 10);
	if (lastdig < 0)
		
		_putchar(lastdig + '0');

	return (lastdig);
}
