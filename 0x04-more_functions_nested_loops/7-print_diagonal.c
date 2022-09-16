#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line
* @n: number of times to print '* Return: a diagonal line
*/

void print_diagonal(int n)
{
	int a, b;

	a = 0;

	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
		_putchar('\n');
}
