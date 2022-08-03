#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: the name to be printed
 * @f: pointer to prtiny_name(printing function)
 */
void print_name(char *name, void (*f)(char *))
{
	_putchar("%s\n", name);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	void (*f)(char *);

	f = print_name;
	f(name);
}
