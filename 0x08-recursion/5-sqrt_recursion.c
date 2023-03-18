#include "main.h"
/**
 * _sqrt - actual sqrt function
 * @n: number
 * @x: root
 *
 * Return: x
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) < n)
	{
		return (_sqrt(n, x + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - main function
 * @n: number
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
