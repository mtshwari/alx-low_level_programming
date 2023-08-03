#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int shift = size - 1;
	int i;

for (i = 0; i < size; i++)
{
if ((n & (1UL << shift)) != 0)
{
_putchar('1');
}
else
{
_putchar('0');
}
shift--;
}
}
