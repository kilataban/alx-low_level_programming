#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - seraches the string for any of a set of bytes
 * @s: the string var to search
 * @accept: the bytes that have met that requirement
 * Return: pointer that shows the char or (0) if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
