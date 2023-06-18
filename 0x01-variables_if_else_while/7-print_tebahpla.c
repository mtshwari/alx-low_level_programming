#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
