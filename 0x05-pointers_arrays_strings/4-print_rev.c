#include "main.h"

/**
 * print_rev - This function prints a reverse string
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
