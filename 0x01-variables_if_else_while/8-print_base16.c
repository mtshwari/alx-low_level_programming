#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int p;

	for (i = 48; i <= 57; i++)
{
	putchar(i);
}
for (p = 97; p <= 102; p++)
{
	putchar(p);
}
putchar('\n');
return (0);
}
