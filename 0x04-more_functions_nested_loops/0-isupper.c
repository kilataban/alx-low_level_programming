#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: test value for function
 * Return: (1) for uppercase, otherwise (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

