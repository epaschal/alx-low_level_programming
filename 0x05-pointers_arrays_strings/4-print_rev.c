#include "main.h"
#include <stdio.h>

/**
 * print_rev - string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int c;
	int i;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	for (i = c; i >= 0; i--)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
