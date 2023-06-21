#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints out the alphabets
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	char L;
	int p = 0;

	while (p <= 10)
	{
		for ( L = 'a' ; L <= 'z'; L++)
		{
			_putchar(L);
		}
_putchar('\n');
p++;
	}
}
