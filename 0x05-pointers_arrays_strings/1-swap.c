#include "main.h"

/**
 * swap_int - swaps two values
 * @a: the firat value
 * @b: the second value
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
