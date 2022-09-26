#include <stdlib.h>
#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the source string to search
* @needle: the substring query
* Return: pointer to haystack start or (0) if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x = 0;

	while (needle[x] != '\0')
		x++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != x)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
