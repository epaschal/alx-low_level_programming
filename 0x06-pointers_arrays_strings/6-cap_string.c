#include "main.h"

/**
 * cap_string - Capitalize
 * @s: string
 *
 * Return: s alwsys
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			if (s[i] == ' ' || s[i] == '\t' ||
			s[i] == '\n' || s[i] == ',' ||
			s[i] == '.' || s[i] == ';' ||
			s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' ||
			s[i] == '}')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
