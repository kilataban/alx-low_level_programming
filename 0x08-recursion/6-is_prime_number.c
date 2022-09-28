#include "main.h"

/**
 * prime_checker - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: Always (0) for Success
 * On error, return (-1)
 */

int prime_checker(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_checker(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success (1)
 * On error, return (0)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
