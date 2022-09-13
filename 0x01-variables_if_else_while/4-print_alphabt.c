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
	char full_alp[50] = "";
        int n = 0;
	
        while (n < sizeof alp && alp[n] != 'e' && alp[n] != 'q')
        {
		printf("%c\n", alp[n]);
		n++;
        }
        return (0);
}
