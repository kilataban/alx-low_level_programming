#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase
 *
 * Return: Always (0) for Success
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
