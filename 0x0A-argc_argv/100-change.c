#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: counter
 * @argv: string
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cents;
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents >= 0)
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			n++;
		}
		printf("%d\n", n);
	}
	else
		printf("0\n");
	return (0);
}
