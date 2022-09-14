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
		n = -n;
		_putchar(n + '0');
	}
	return (n);
}
