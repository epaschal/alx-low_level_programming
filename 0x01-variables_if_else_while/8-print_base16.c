#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
