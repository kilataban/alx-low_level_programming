#include <stdio.h>

/**
 * first - first function to invoke
 * Return: Always nothing for void
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
