#include "main.h"
/**
 * _prime - function
 * @n: number
 * @i: checker
 *
 * Return: 1 or 0
 */
int _prime(int n, int i)
{
	if (n > 3 && i != n)
	{
		if (i == 1)
		{
			i++;
		}
		if ((n % i) > 0)
		{
			return (_prime(n, i + 1));
		}
		else if ((n % i) == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * is_prime_number - main function
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 1));
}
