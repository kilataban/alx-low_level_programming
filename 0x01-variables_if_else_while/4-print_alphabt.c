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
        char * alp = "abcdefghijklmnopqrstuvwxyz";
        int n = 0;
	int alp_length = 26;

	for(n = 0; n < alp_length; n++)
	{
		if(n != 'e' && n != 'q')
		{
			printf("%c\n", alp[n]);
		}
	}
	return (0);
}
