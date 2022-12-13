#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the input string to check
 * @c: the character we are seeking
 * Return: pointer to first c value found in string else NULL if not found
 */

char *_strchr(char *s, char c)
{
        while (*s)
        {
                if (*s != c)
                        s++;
                else
                        return (s);
        }
        if (c == '\0')
                return (s);

        return (NULL);
}
