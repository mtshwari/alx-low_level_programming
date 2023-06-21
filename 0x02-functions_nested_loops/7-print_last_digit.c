#include "main.h"
/**
 * print_last_digit -  Print the last digit of a number
 *
 * @n: input number as integer
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int p;

p = n % 10;
if (p < 0)
{
_putchar(-p + 48);
return (-p);
}
else
{
_putchar(p + 48);
return (p);
}
}
