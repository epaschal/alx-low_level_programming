#include <stdio.h>

/**
 * main - upper and lower case
 */
void main(void)
{
	char l, u;

	for (l = 'a', u = 'A'; l <= 'z', u <= 'Z'; l++, u++)
	{
		putchar(l);
		putchar(u);
	}
	putchar('\n');
}
