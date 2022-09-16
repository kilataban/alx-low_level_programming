#include "main.h"

/**
* print_line - draws straight line in the terminal
* @n: number of times to print '_'
* Return: continous __ that make a line
*/

void print_line(int n)
{
	int nl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nl = 0; nl < n; nl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

