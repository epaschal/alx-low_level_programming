#include "main.h"

/**
 * leet - leet code
 * @s: string
 *
 * Return: s always
 */
char *leet(char *s)
{
	int i;
	int j;

	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
			}
		}
	}
	return (s);
}
