#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard that should be printed
 * Return: Always (0)
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
			_putchar(a[y][x++]);
		_putchar('\n');
		y++;
	}
}
