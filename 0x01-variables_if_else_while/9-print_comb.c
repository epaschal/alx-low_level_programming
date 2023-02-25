#include <stdio.h>

/**
 * main - numbers in ascending order
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
