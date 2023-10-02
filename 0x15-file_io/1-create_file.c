#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of the file to create
 * @text_content: pointer to string to write to file
 *
 * Return: -1 if functiom fails, otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int q, fd, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(fd, text_content, length);

	if (fd == -1 || q == -1)
		return (-1);

	close(fd);

	return (1);
}
