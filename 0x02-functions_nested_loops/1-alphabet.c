#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lower case
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');

	return (0);
}
