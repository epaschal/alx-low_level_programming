#include "main.h"

/**
 * _abs -absolute value
 * @n: the number to convert
 *
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
