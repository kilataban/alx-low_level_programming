#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - print the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always (0) for Success
 *
 */

int main(void)
{
	int m;

	for (m = 122; m > 96; m--)
	{
		putchar(m);
	}

	putchar('\n');
	return (0);
}
