#include "main.h"

/**
 * print_line - prints the _ character n times
 * @n: number of times the _ character is to be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');

		_putchar('\n');
	}
	else
		_putchar('\n');
}
