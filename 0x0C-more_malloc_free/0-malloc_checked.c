#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes to allocate
 *
 * Return: pointer to allocated memory, else return 98
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
