#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line
 * @n: is the number of time _ should be printed
 * if n = o the function will ony print \n
 * Return: Always 0
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
