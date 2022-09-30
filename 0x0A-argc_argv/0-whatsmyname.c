#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file then new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of char/strings
 * Return: Always (0) means Success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
