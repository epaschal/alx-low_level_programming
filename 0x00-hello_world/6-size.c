#include <stdio.h>

/**
 * main - Size of data types
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int x;
	float f;
	double d;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("The size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
