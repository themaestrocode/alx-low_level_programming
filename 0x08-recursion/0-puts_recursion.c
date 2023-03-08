#include "main.h"

/**
 * _puts_recursion - prints a string, then a new line
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	-puts_recursion(s + 1);
}
