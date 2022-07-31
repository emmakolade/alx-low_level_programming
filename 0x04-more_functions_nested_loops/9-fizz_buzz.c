#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for the multiple of threee prints fizz instead of the number
 * and for the multiple of five prints Buzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++:)
	{
		if ((n % 3) == 0)
			_putchar(Fizz);

		else if ((n % 5) == 0)
			_putchar(Buzz);

		else ((n % 3) == 0 && (n % 5) == 0)
			_putchar(FizzBuz);
	}
	_putchar(n);
	_putchar('\n');
}
