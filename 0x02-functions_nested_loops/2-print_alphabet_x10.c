#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints out the alphabets
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int p;

	for (i = 1; i <= 10; i++)
	{
		for (p = 97; p <= 122; p++)
		{
			_putchar(p);
		}
	}
_putchar('\n');
}
