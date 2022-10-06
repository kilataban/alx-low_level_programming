#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to newly allocated memory slot
 */

int *array_range(int min, int max)
{
	int i, x;
	int *a;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	a = malloc(sizeof(int) * x);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < x; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
