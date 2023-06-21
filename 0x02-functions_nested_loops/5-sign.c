#include "main.h"
/**
 * print_sign- Prints a sign of a number
 * @n: The input number as an integer
 * Return: 0 if is zero, 1 if is greater, -1 if is less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		else if (n == 0)
		{
			_putchar(48);
			return (0);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
		_putchar('\n');
}
