#include "main.h"

/**
 * _strncat - concatenates n-bytes of src to dest
 * @dest: destination
 * @src: source
 * @n: the buytes/bits from src to be contatenated
 * Return: dest (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
