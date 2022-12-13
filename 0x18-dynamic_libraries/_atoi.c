#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: new string from conversion
 */
int _atoi(char *s) 
{
        int sign_int = 1;
        unsigned int a = 0;

        do {
                if (*s == '-')
                        sign_int *= -1; 

                else if (*s >= '0' && *s <= '9')
                        a = (a * 10) + (*s - '0');

                else if (a > 0)
                        break;

        } while (*s++);

        return (a * sign_int);
}
