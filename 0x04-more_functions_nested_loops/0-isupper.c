#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase characters
 * @c: c is the character to be checked
 *
 * Return: 1 if the character is uppercase and 0 if otherwise
 */
int _isupper(int c);
{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
