#include <stdio.h>
#include <math.h>

/**
* main - finds the larget prime factor
* Description - uses math library to find largest prime factor
* 612852475143
* Return: 0
*/

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
			printf("%d\n", a);
	}
	return (0);
}
