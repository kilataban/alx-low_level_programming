#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to the string
 * Return: If b is not NULL, one or more chars in b else NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, a = 1;
	int length;

	if (*b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * a;
		a *= 2;
	}

	return (number);
}
