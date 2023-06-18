#include  <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints out numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int u;
int a = 0;

while (a < 10)
{
u = 0;
while (u < 10)
{
i = 0;
while (i < 10)
{
if (i != u && u != a && a < u && u < i)
{
putchar('0' + a);
putchar('0' + u);
putchar('0' + i);
if (i + u + a != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
i++;
}
u++;
}
}
a++;
putchar('\n');
return (0);
}
