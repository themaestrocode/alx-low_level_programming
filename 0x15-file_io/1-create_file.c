#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: content to be written into the file
 * Return: 1 (success), 0 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, writeB;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		writeB = write(fd, text_content, len);
		if (writeB == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
