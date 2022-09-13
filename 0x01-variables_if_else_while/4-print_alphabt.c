#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet with an exception of q and e
 *
 * Return: Always (0) for Success
 *
 */

int main(void)
{
        char alp[52] = "abcdefghijklmnopqrstuvwxyz";
        int arrLen = sizeof alp[52] / sizeof alp[0];
        int n = 0;
        while (n < arrLen && alp[n] != 'e' && alp[n] != 'q')
        {
                printf("%c\n", alp[n]);
                n++;
        }
        return (0);
}
