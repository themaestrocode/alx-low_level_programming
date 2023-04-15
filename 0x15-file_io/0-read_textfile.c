#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: size (success) or 0 (failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, br, bw;
	char buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	/* file opened with the 'open' syscall */
	if (fd < 0)
		return (0);

	buff = (char *)malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buff, letters);
	if (br < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}

	bw = write(STDOUT_FILENO, buff, br);
	if (bw < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (bw);
}
