#include "main.h"

/**
 * _strcat - adds a string to another to form a new string
 * @dest: the destination string
 * @src: the source string
 * Return: (dest) success
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
