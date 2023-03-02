#include "main.h"

/**
 * _strcat - adds a string to another to form a new string
 * @dest: the destination string
 * @src: the source string
 * Return: (dest) success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i + j] = src[j];
		}
	}

	dest[i + j] = '\0';
	return (dest);
}
