#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: parameter being tested for alphabets
 * Return: (0) means success
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
