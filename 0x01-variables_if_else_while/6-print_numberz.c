#include <stdio.h>
/**
 *
 * main - prints all single digit base 10 numbers then \n
 *
 * Return: always (0) for success
 */
int main(void)
{
	int n;

	for(n = 0; n <10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
