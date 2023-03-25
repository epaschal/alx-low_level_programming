#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int l = 0;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		l += 1;
	}
	for (j = 0; j < l; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
