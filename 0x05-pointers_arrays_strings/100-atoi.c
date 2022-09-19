#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: The string to convert
 *
 * Return: string value on converted integer
 */
int _atoi(char *s)
{
	int value = 1;
	int num = 0;

	do {
		if (*s == '-')
			value *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++)

	return (num * value);
}
