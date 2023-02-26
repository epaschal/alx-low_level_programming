#include "main.h"

/**
 * print_last_digit - Last digit
 * @n: the number
 *
 * Return: always n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
	}
	else if (n < 0)
	{
		n = -(n % 10);
	}
	return (n);
}
