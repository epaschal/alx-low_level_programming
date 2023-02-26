#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 * @n: the starting point
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d ,", i);
	}
	printf("\n");
}
