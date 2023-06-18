#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t, p;

	for (t = 0; t < 100; t++)
	{
		for (p = 0; p < 100; p++)
		{
			if (t < p)
			{
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				if (t != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
