#include "main.h"
/**
 * print_times_table - print times table
 * @n: number to be printed
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n < 0 || n > 15)
	{
		for (x = 0; x <= 0; x++)
		{
			for (y = 0; y <= 0; y++)
			{
				z = y * x;

				if (y == 0)
				{
					_putchar(z + '0');
				}
				else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
