#include "main.h"

/**
 * print_square - draws a new square
 * @size: length and width of square
 *
 * Return: void 
 */
void print_square(int size)
{
int row;
int column;
if (size > 0)
{
for (row = 0; row < size; row++)
{
for (colunm = 0; colunm < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
