#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: initialising char
 *
 * Return: the pointer of an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr  = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
