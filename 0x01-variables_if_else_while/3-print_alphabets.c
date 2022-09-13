#include <stdio.h>
/**
 * main - prints mixed case alphabet
 *
 * Return: Always (0) for success
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
