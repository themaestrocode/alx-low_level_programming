#include "main.h"

/**
 * _strncpy - copies a string from the source to the destination
 *@dest: the pointer to the destination
 *@src: the pointyer to the source string
 *@n: bytes to be copied
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
