#include "main.h"

/**
* cap_string - capitalises all words of a string
* @str: the string to input
* Return: Always (0)
*/

char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' '
		    || str[x] == '\t'
		    || str[x] == '\n'
		    || str[x] == '.'
		    || str[x] == ','
		    || str[x] == '!'
		    || str[x] == '?'
		    || str[x] == '"'
		    || str[x] == '('
		    || str[x] == ')'
		    || str[x] == '{'
		    || str[x] == '}')
		{
			x++;
			if (str[x] >= 'A' && str[x] <= 'Z')
				x++;
			else if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
			x--;
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	return (str);
}

