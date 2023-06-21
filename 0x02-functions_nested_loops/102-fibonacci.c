#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int p, m, n, next;

	m = 1;

	n = 2;

	for (p = 1; p <= 50; ++p)
	{
		if (m != 20365011074)
		{
			printf("%ld, ", m);
		} else
		{
			printf("%ld\n", m);
		}
		next = m + n;
		m = n;
		n = next;
	}

	return (0);
}
