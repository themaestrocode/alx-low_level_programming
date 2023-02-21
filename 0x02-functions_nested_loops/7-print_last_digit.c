#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - prints the last digit of an int
 *
 * @n: the variable
 *
 * Return: the last digit of n
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
