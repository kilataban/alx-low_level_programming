#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit to reference
 * Return: (1) for Success, (-1) failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ctr;

	if (index > 63)
		return (-1);

	ctr = 1 << index;
	*n = (*n | ctr);

	return (1);
}


