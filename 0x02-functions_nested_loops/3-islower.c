#include "main.h"
/**
 * _islower - Prints the lowercase character
 *
 * @c: The character in ASCII code
 * Return: 1 for lowercase otherwise 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
