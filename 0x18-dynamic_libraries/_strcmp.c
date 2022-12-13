#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to compare
* @s2: second string to compare
* Return: 0 if equal
*/

int _strcmp(char *s1, char *s2)
{
        int i = 0, x = 0;

        while (x == 0)
        {
                if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
                        break;
                x = *(s1 + i) - *(s2 + i); 
                i++;
        }

        return (x);
}
