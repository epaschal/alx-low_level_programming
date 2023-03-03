#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: destination
 * @src: source
 * @n: number of string
 *
 * Return: dest always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
