#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the name of the file to be read
 * @letters: number of xters to be read by the program
 * Return: Number of xters read else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
