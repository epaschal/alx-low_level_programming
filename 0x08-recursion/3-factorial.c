#include "main.h"
/**
 * factorial - function
 * @n: number
 *
 * Return: n
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if  (n == 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
