#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter for the number being tested
 * Return: Always yields (0) for Success
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		int l;
		l = n % 10;
		if (l < 0)
		{
			_putchar(-l + 48);
			return (-l);
		}
		
		else
		{
			_putchar(l + 48);
			return (l);
		}
	}
}
