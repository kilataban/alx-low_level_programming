#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet with an exception of q and e
 *
 * Return: Always (0) for Success
 *
 */

int main(void)
{
        char alph;

	for(alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	return (0);
}
