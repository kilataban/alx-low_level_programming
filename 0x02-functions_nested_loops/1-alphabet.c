#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 *
 * Return: (0) Always means success
 */

void print_alphabet(void)
{
	char alph;

	for(alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
