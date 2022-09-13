#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase then \n
 *
 * Return: Always (0) for success
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
