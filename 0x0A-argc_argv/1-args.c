#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments recieved
 * @argc: number of arguments
 * @argv: an array of strings to pass to the function
 * Return: Always (0) for Success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
