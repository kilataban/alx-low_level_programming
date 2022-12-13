#include "main.h"
/**
 * _islower - checks for a lowercase character
 * @c: parameter for testing letters
 * Return: Always (0) means Success
 */

int _islower(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
