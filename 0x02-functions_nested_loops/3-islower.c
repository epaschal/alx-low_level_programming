#include <stdio.h>

/**
 * _islower - lowercase letters
 * @c: The letter to be checked
 *
 * Return: 1 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
