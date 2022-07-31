#include "main.h"
/**
 * more_numbers - print numbers 10 times
 * @x: the counter
 */
void more_numbers(void)
{
	int x;
	int n;

	{
		for (x = 0; x <= 10; x++)
		{
			for (n = 0; n <= 14; n++)
			{
				_putchar (n + '0');
			}
		}
		_putchar('\n')
	}
}
