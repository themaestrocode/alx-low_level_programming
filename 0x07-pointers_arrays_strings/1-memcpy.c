#include "main.h"

/**
 * _memcpy - copies bytes frm src to dest
 * @dest: destination
 * @src: source
 * @n: the bytes to be copied
 * Return: dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n--)
	{
		*ptr_dest++ = *ptr_src++;
	}

	return (dest);
}
