#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: substring of the s string
 * Return: bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int a = 0;
	int b;

	while (*s)
	{
		x = 0;
		b = a;
		while (*(accept + x) != '\0')
		{
			if (*(accept + x) == *s)
				a++;
			x++;
		}
		if (b == a) 
			break;
		s++;
	}
	return (a);
}
