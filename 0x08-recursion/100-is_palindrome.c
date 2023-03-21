#include "main.h"

int check_pal(char *s, int i, int l);

/**
 * is_palindrome - checks for palindrome
 * @s: strimg
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length
 * @s: syring
 *
 * Return: l
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - function
 * @s: string
 * @i: input
 * @l: len of string
 *
 * Return: 1 or 0
 */
int check_pal(char *s, int i, int l)
{
	if (s[i] != s[l - 1])
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (check_pal(s, i + 1, l - 1));
}
