#include "main.h"

/**
 * print_alphabet - do some priting
 *
 * Description: prints_alphabet() prints the alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
