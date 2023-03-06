#include "main.h"

/**
 * _memset - does something
 * @s: pointer to be returned to
 * @b: another variable
 * @n: variable 3
 * Return: s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
