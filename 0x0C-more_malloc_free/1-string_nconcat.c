#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes cumulatively
 *
 * Return: pointer to new mem allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, j, k;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (a + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < a; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + a] = s2[k];
	s[a + j] = '\0';
	return (s);
}
