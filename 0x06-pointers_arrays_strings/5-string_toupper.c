#include "main.h"

/**
* string_toupper - changes all lowercase letters to uppercase
* @a: refers to input string
* Return: to origin
*/

char *string_toupper(char *a)
{
	int ctr = 0;

	while (*(a + ctr) != '\0')
	{
		if ((*(a + ctr) >= 97) && (*(a + ctr) <= 122))
			*(a + ctr) = *(a + ctr) - 32;
		ctr++;
	}

	return (a);
}


