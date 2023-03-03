#include "main.h"
/**
 * reverse_array - Reverse
 * @a: array
 * @n: elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
