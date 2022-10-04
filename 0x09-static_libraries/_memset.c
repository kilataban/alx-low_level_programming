#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: start of memory area
 * @b: the constant byte
 * @n: number of bytes to fill
 *
 * Return: to s, beginning of pointer memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
