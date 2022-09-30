#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers and print
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: (0) if function runs properly.
 */

int main(int argc, char *argv[])
{
	int total, x;
	char *a;
	int number;

	total = 0;
	if (argc > 1)
	{
		for (x = 1; argv[x]; x++)
		{
			number = strtol(argv[x], &a, 10);
			if (!*a)
				total += number;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
