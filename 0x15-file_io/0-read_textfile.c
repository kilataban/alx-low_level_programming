#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to POSIX
 * @filename: name of the file
 * @letters: numbers of printed letters
 * Return: numbers of letters printed. It fails, returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t n, a;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n = read(file_d, buffer, letters);
	a = write(STDOUT_FILENO, buffer, n);

	close(file_d);

	free(buffer);

	return (a);
}
