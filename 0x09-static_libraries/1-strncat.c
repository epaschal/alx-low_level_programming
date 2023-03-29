#include "main.h"

/**
 * _strncat - concatenate
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest always
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
