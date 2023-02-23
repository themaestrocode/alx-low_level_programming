#include "main.h"

/**
 * print_numbers - prints integers from 0 - 9, then a new line
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
