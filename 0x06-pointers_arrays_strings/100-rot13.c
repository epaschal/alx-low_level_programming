#include "main.h"
/**
 * rot13 - Royt 13
 * @s: string
 *
 * Return: s always
 */
char *rot13(char *s)
{
	int i;
	int j;

	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
			}
		}
	}
	return (s);
}
