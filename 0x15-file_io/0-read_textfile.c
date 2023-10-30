#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: text file to be read
 * @letters: number of letters read
 *
 * Return: the actual number of letters it could read and print
 * 0 if NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t q;
	ssize_t r;
	char *buff;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	q = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (q);
}
