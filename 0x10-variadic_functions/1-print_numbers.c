#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - printe numbers then a new line
 *
 * @separator: The string to pring between numbers
 * @n: Number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	i = 0;
	va_start(numbers, n);
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numbers);
}
