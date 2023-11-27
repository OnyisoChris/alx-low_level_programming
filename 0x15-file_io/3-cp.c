#include "main.h"

char *buffer_create(char *filename);
void file_close(int fd);

/**
 * buffer_create - Allocation of 1024 bytes for buffer
 * @filename: name of file buffer
 *
 * Return: pointer to newly allocated buffer
 */

char *buffer_create(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * file_close - closes file descriptors
 * @fd: file descriptor to br closed
 */

void file_close(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of one file to another
 *@argc: number of arguments
 *@argv: array of pointers to arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, from, to;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buffer_create(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		j = write(to, buff, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		i = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(buff);
	file_close(from);
	file_close(to);

	return (0);
}
