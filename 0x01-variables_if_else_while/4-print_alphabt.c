#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t = 97;

	while (t <= 122)
{
	if (t == 113 || t == 101)
{
	t++;
	continue;
}
	putchar(t);
	t++;
}
putchar('\n');
return (0);
}
