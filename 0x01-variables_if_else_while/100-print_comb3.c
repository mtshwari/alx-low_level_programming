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
int u = 0;

while (u < 10)
{

	i = 0;
while (i < 10)
{
	if (u != i && u < i)
{
	putchar('0' + u);
	putchar('0' + i);
if (i + u != 17)
{
	putchar(',');
	putchar(' ');
}
}
i++;
}
u++;
}
putchar('\n');
return (0);
}
