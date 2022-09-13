#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible combinations of 2 digits.
 *
 * Return: Always (0) means Success 
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
