#include "main.h"

/**
* leet - function that encodes a string into 1337
* @str: the string to be encoded
* Return: Always (0)
*/

char *leet(char *str)
{
	int a, b;
	char *x = "aeotlAEOTL";
	char *y = "4307143071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] == x[b])
				str[a] = y[b];
		}
	}
	return (str);
}
