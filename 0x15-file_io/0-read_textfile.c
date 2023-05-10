#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0
 * if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, m;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[n] = '\0';

	m = write(STDOUT_FILENO, buffer, n);
	if (m == -1 || m != n)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (n);
}
