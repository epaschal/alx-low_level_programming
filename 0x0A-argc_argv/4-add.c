#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: counter
 * @argv: string
 *
 * Return: n or 1
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				n += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", n);
	}
	else
		printf("0\n");
	return (0);
}
