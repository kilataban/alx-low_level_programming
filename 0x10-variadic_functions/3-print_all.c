#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints any arguments passed to it
 * @format: the data type to match to args
 *
 * Return: Always nothing for void function type
 */

void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	char *arg_s;
	va_list args;

	va_start(args, format);
	while (*(format + i) != '\0' && (format))
	{
		switch (*(format + i))
		{
		case 's':
			arg_s = va_arg(args, char *);
			if (arg_s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", arg_s);
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
		case 'c':
			printf("%c", (char) va_arg(args, int));
			break;
		default:
			i++;
			continue;
		}
		if (*(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
