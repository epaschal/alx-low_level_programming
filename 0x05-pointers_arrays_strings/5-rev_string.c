#include "main.h"

void rev_string(char *s)
{
	char r;
	int c;
	int i;

	r = s[0];
	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
