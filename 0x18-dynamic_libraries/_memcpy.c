#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: points to destination
 * @src: points to source
 * @n: specifies number of bytes to copy
 * Return: to start of source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i = 0;
        char *start = dest;

        while (i < n)
        {
                *dest++ = *src++;
                i++;
        }
        return (start);
}
