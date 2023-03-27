#include "main.h"
/**
 * puts_half - half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int l = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		l += 1;
	}
	if (l % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for  (n = (l - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

