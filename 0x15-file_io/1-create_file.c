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
	int fd, writeB, len = strlen(text_content) + 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
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
