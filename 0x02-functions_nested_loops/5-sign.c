#include "main.h"

/**
 * print_sign - prints the sign of a number to stdout
 *
 * @n: integer to be checked
 *
 * Return: (1) (success), (0) (negative)
 *
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
}
