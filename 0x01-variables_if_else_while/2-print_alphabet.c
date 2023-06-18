#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A = 97;

	while (A <= 122)
{
	putchar(A);
	A++;
}
putchar('\n');

return (0);
}
