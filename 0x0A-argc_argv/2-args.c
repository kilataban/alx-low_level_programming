#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments the function receives
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always (0) for Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
