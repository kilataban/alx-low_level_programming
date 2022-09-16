#include "main.h"

/**
* more_numbers - prints 10 times, numbers 0 to 14
* Return: 0 to 14, ten times then new line
*/
void more_numbers(void)
{
	int i, reps;

	for (reps = 0; reps < 10; reps ++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
