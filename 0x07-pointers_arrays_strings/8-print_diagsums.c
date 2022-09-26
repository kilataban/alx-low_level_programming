#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of square int matrix
 * @a: the array pointer
 * @size: the size of the array
 * Return: nothing - void function
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int s1 = 0;
	int s2 = 0;

	while (x <= (size * size))
	{
		s1 = s1 + a[x];
		x = x + size + 1;
	}

	while (y < (size * size - 1))
	{
		s2 += a[y];
		y = y + size - 1;
	}

	printf("%d, %d\n", s1, s2);
}
