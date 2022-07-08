#include "main.h"

/**
 * _isupper - is a function that checks for upper cas charater
 * @c: an input chracter
 * Return: 1 if c is upper case, or 0 if c is ther wise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);

