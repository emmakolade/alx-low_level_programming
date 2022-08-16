#include "main.h"
/**
 * more_numbers - print the number ten times
 */
void more_numbers(void)
{
	int n, x;

	for (x = 0; x <= 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n')
	}
}
