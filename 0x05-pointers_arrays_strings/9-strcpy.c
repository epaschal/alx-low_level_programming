#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; src[i] <= '\0'; i++)
	{
		l += 1;
	}
	for (j = 0; j < l; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
