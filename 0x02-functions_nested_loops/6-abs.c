#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @p: The value of the integer
 * Return: Absolute value
 */
int _abs(int p)
{
	if (p >= 0)
	{
		return (p);
	}
	else
	{
		return (p * -1);
	}
}
