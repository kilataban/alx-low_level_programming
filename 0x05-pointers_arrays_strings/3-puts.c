#include "main.h"
#include <unistd.h>
/**
* _puts - prints string followed by new line to stdout
* @str: the string
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
